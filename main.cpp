#include <iostream>
#include <vector>
#include <string>
// #include <any>
#include <algorithm>
#include <cstdlib>
using namespace std;

struct Pedido
{
    int id;
    string nombreCliente;
    int tipoServicio;
    float pesoKilos;
    float total;

};


void clearTerminal() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void menu(){ 
    cout<< "BIENVENIDO AL SISTEMA DE LAVANDERIA" << endl;
    cout << "1. Registrar pedido." << endl;
    cout << "2. Listar pedidos." << endl;
    cout << "3. Buscar por id. " << endl;
    cout << "4. Salir." << endl;
}

float getTotal(int tipo_servicio, float peso){
    printf("Calculando total para tipo de servicio %d y peso %.2f kg...\n", tipo_servicio, peso);
    return tipo_servicio * peso;
}

void registro_pedido(vector<Pedido>& pedidos, int & id){
    string nombre;
    int tipo_servicio;
    float peso;
    // Limpiamos cualquier residuo del buffer que venga del menú
    cin.ignore(1000, '\n'); 
    cout << "Ingrese su nombre: ";
    getline(cin, nombre); // Usar getline permite nombres con espacios (ej: "Juan Perez")
    cout << "Ingrese el tipo de servicio: ";
    cin >> tipo_servicio;
    cout << "Ingrese el peso (kg): ";
    cin >> peso;
    float total = getTotal(tipo_servicio, peso); 
    // Guardamos en el vector
    Pedido nuevoPedido = {id, nombre, tipo_servicio, peso, total};
    pedidos.push_back(nuevoPedido);
    cout << "¡Pedido registrado con ID: " << id << "!" << endl;
}

void listarPedidos(const vector<Pedido>& pedidos){ 
    if (pedidos.empty()) {
        cout << "No hay pedidos registrados." << endl;
        return;
    }
    for(const auto& pedido : pedidos){ 
        cout << "ID: " << pedido.id << endl;
        cout << "Nombre: " << pedido.nombreCliente << endl;
        cout << "Tipo de servicio: " << pedido.tipoServicio << endl;
        cout << "Peso: " << pedido.pesoKilos << " kg" << endl;
        cout << "Total: " << pedido.total << "\n" << endl;
    }
}

int main(){
    vector<Pedido> pedidos;
    int counter = 1;
    int opcion = 0;
    while (true)
    {     
        menu();
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            clearTerminal();
            registro_pedido(pedidos, counter);
            counter++;
            break;

        case 2: 
            clearTerminal();
            listarPedidos(pedidos);
            break;

        case 3:
            clearTerminal();
            {
                int idBuscado;
                cout << "Ingrese el ID a buscar: ";
                cin >> idBuscado;
                bool encontrado = false;
                for (const auto& p : pedidos) {
                    if (p.id == idBuscado) {
                        encontrado = true;
                        cout << "ID: " << p.id << endl;
                        cout << "Nombre: " << p.nombreCliente << endl;
                        cout << "Tipo de servicio: " << p.tipoServicio << endl;
                        cout << "Peso: " << p.pesoKilos << " kg" << endl;
                        cout << "Total: " << p.total << "\n" << endl;
                        break;
                    }
                }
                if (!encontrado) {
                    cout << "Pedido no encontrado para ID " << idBuscado << "." << endl;
                }
            }
            break;
        
        case 4: 
            clearTerminal();
            cout << "Saliendo del programa..." << endl;
            return 0;

        default:
            clearTerminal();
            cout << "Opcion invalida. Intente de nuevo." << endl;
            break;
        }
    }
    
    return 0;
}

