#include <iostream>

using namespace std;

void opcion1() {
    cout << "Seleccionaste la opcion 1" << endl;
}

void opcion2() {
    cout << "Seleccionaste la opcion 2" << endl;
}

void opcion3() {
    cout << "Seleccionaste la opcion 3" << endl;
}

void mostrarMenu() {
    int opcion;

    do {
        // Mostrar el men�
        cout << "MENU" << endl;
        cout << "1. Opci�n 1" << endl;
        cout << "2. Opci�n 2" << endl;
        cout << "3. Opci�n 3" << endl;
        cout << "4. Salir" << endl;
        cout << "Selecciona una opcion: ";
        cin >> opcion;
        cout << endl;

        // Realizar acciones seg�n la opcion seleccionada
        switch (opcion) {
        case 1:
            opcion1();
            break;
        case 2:
            opcion2();
            break;
        case 3:
            opcion3();
            break;
        case 4:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opcion invalida. Intenta de nuevo." << endl;
        }

        cout << endl;

    } while (opcion != 4);
}

int main() {
    mostrarMenu();
    return 0;
}