#include <iostream>
#include "Codificador.h"
#include "Finder.h"

using namespace std;

void opcion1() {
    codificador x;
    string a = "", b = "", c = "", d = "";
    string palabra = "";

    cout << "Ingresar Datos" << endl << endl;
    cout << "Nombre : ";
    cin >> a;
    cout << endl << "Apellido : ";
    cin >> b;
    cout << endl << "Telefono : ";
    cin >> c;
    cout << endl << "Clave : ";
    cin >> d;

    x.In_datos(a, b, c, d);

    if (a.length() >= 4 & a.length() <= 10 & b.length() >= 4 & b.length() <= 10 & c.length() >= 4 & c.length() <= 10 & d.length() >= 4 & d.length() <= 10) {
        cout << endl;

        cout << "VER DATOS" << endl;
        cout << "------------------" << endl;

        x.SEEdata();

        cout << "CONTRASENA GENERADA : ";
        x.password();
        cout << endl;

    }
    else {
        cout  << endl;
        cout << "La longitud del nombre debe ser entre 4 y 10 caracteres y debe ser estrictamente par. " << endl;
    }


}

void opcion2() {
    cout << " Word search" << endl << endl;
    int numFilas, numColumnas;
    cout << "Ingrese numero de Filas: ";
    cin >> numFilas;
    cout << "Ingrese numero de Columnas: ";
    cin >> numColumnas;

    Finder finder(numFilas, numColumnas);

    cout << endl << "Matriz: " << endl << endl;
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
