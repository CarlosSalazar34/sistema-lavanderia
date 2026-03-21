#include <iostream>
using namespace std;

void menu(){ 
    cout<< "BIENVENIDO AL SISTEMA DE LAVANDERIA" << endl;
    cout << "1. Registrar pedido." << endl;
    cout << "2. Listar pedidos." << endl;
    cout << "3. Buscar por id. " << endl;
    cout << "4. Salir." << endl;
}

int main(){
    int opcion;
    while (true)
    {   
        menu();
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
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

