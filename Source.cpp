#include <iostream>

using namespace std;

void opcion1() {
    cout << "-------Crear cazador -------" << endl;
}

void opcion2() {
    cout << "-------Crear Pilar-------" << endl;
}

void opcion3() {
    cout << "------- Crear Luna superior -------" << endl;
}

void opcion4() {
    cout << "------- Imprimir Cazadores y Pilares -------" << endl;
}

void opcion5() {
    cout << "------- Imprimir Lunas superiores -------" << endl;
}

void opcion6() {
    cout << "------- Simulacion -------" << endl;
}


void mostrarMenu() {
    int opcion;

    do {
        // Mostrar el menú
        cout << "Bienvenido!" << endl;
        cout << "1. Crear cazador" << endl;
        cout << "2. Crear Pilar" << endl;
        cout << "3. Crear Luna superior" << endl;
        cout << "4. Imprimir Cazadores y Pilares" << endl;
        cout << "5. Imprimir Lunas superiores" << endl;
        cout << "6. Simulacion" << endl;
        cout << "7. Salir" << endl;
        cout << "Selecciona una opcion: ";
        cin >> opcion;
        cout << endl;

        // Realizar acciones según la opcion seleccionada
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
            opcion4();
            break;
        case 5:
            opcion5();
            break;
        case 6:
            opcion6();
            break;
        case 7:
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