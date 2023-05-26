#include <iostream>
#include "Codificador.h"
#include "Finder.h"

using namespace std;

Codificador codificador;
void opcion1() {

     cout << "Ingrese los datos" <<  endl;
     codificador.ingresarDatos();
     codificador.validarLongitud();
     string contrasenaEncriptada = codificador.generarContrasenaEncriptada();

     cout << "Contrasena encriptada: " << contrasenaEncriptada <<  endl;

}

void opcion2() {
    cout << " Word search" << endl << endl;
    int numFilas, numColumnas;
    cout << "Ingrese numero de Filas: ";
    cin >> numFilas;
    cout << "Ingrese numero de Columnas: ";
    cin >> numColumnas;

    Finder finder(numFilas, numColumnas);

    cout << "Matriz: " << endl;
    finder.printMatrix();

    string word;
    cout << "Palabra por buscar en la matriz: ";
    cin >> word;

    if (finder.searchHorizontal(word) || finder.searchVertical(word)) {
        cout << "La palabra '" << word << "' SI se encuentra en la matriz." << endl;
    }
    else {
        cout << "La palabra '" << word << "' NO se encuentra en la matriz." << endl;
    }
}


void mostrarMenu() {
    int opcion;

    do {
        // Mostrar el menú
        cout << "MENU" << endl
            << "1. Generar contrasenia encriptada" << endl
            << "2. Word search" << endl
            << "3. Salir" << endl
            << "Ingrese una opcion : ";
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
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opcion invalida. Intenta de nuevo." << endl;
        }

        cout << endl;

    } while (opcion != 3);
}

int main() {
    mostrarMenu();
    return 0;
}
