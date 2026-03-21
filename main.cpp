#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <any>


void menu(){ 
    cout<< "BIENVENIDO AL SISTEMA DE LAVANDERIA" << endl;
    cout << "1. Registrar pedido." << endl;
    cout << "2. Listar pedidos." << endl;
    cout << "3. Buscar por id. " << endl;
    cout << "4. Salir." << endl;
}

void registro_pedido (vector<vector<any>>& pedidos, int & id) {
    string nombre, tipo_servicio;
    float peso;
    cout << "Ingrese su nombre";
    cin >> nombre;
    cout << "ingrese el tipo de servicio: ";
    cin >> tipo_servicio;
    cout << "Ingrese el peso: ";
    cin >> peso;
    pedidos.push_back({id, nombre, tipo_servicio, peso});
}

int main(){
    vector<vector<any>> pedidos;
    int counter;

    int opcion;
    while (true)
    {   
        menu();
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            registro_pedido(pedidos, counter);
            break;
        
        case 4: 
            cout << "Saliendo del programa..." << endl;
            return 0;
        default:
            break;
        }
    }
    

    return 0;
}

