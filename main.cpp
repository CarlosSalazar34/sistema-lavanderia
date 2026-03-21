#include <iostream>
#include <vector>
#include <string>
#include <any>
#include <algorithm>
#include <cstdlib>
using namespace std;

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

void registro_pedido(vector<vector<any>>& pedidos, int & id){
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

void listarPedidos(vector<vector<any>>& pedidos){ 
    for(auto pedido : pedidos){ 
        cout << "ID: " << any_cast<int>(pedido[0]) << endl;
        cout << "Nombre: " << any_cast<string>(pedido[1]) << endl;
        cout << "Tipo de servicio: " << any_cast<string>(pedido[2]) << endl;
        cout << "Peso: " << any_cast<float>(pedido[3]) << endl;
    }
}

int main(){
    vector<vector<any>> pedidos;
    int counter;
    int opcion = 1;
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
        
        case 4: 
            clearTerminal();
            cout << "Saliendo del programa..." << endl;
            return 0;
        default:
            break;
        }
    }
    

    return 0;
}

