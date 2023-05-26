#include "Codificador.h"
#include <iostream>
#include <cmath>

using namespace std;

void Codificador::ingresarDatos() {
     cout << "Ingrese el nombre: ";
     cin >> nombre;

     cout << "Ingrese el apellido: ";
     cin >> apellido;

     cout << "Ingrese el telefono: ";
     cin >> telefono;

     cout << "Ingrese la clave: ";
     cin >> clave;
}

void Codificador::validarLongitud() {
    while (nombre.length() < 4 || nombre.length() > 10 || nombre.length() % 2 != 0 ||
        apellido.length() < 4 || apellido.length() > 10 || apellido.length() % 2 != 0 ||
        telefono.length() < 4 || telefono.length() > 10 || telefono.length() % 2 != 0 ||
        clave.length() < 4 || clave.length() > 10 || clave.length() % 2 != 0) {
         cout << "Los atributos deben tener una longitud entre 4 y 10 y ser pares. Vuelva a ingresar los datos." <<  endl;
        ingresarDatos();
    }
}
std::string Codificador::generarContrasenaEncriptada() {
    std::string contrasena;

    int max_length = max(max(max(nombre.length(), apellido.length()), telefono.length()), clave.length());

    for (int i = 0; i < max_length; i++) {
        if (i < nombre.length()) {
            contrasena += nombre[i];
            if ((i + 1) < nombre.length() && nombre[i] == nombre[i + 1]) {
                contrasena += '(';
                int j = i + 2;
                while (j < nombre.length() && nombre[j] == nombre[i]) {
                    j++;
                }
                contrasena += nombre.substr(i + 1, j - i - 1);
                contrasena += ')';
                i = j - 1;
            }
        }

        if (i < apellido.length()) {
            contrasena += apellido[i];
            if ((i + 1) < apellido.length() && apellido[i] == apellido[i + 1]) {
                contrasena += '(';
                int j = i + 2;
                while (j < apellido.length() && apellido[j] == apellido[i]) {
                    j++;
                }
                contrasena += apellido.substr(i + 1, j - i - 1);
                contrasena += ')';
                i = j - 1;
            }
        }

        if (i < telefono.length()) {
            contrasena += telefono[i];
            if ((i + 1) < telefono.length() && telefono[i] == telefono[i + 1]) {
                contrasena += '(';
                int j = i + 2;
                while (j < telefono.length() && telefono[j] == telefono[i]) {
                    j++;
                }
                contrasena += telefono.substr(i + 1, j - i - 1);
                contrasena += ')';
                i = j - 1;
            }
        }

        if (i < clave.length()) {
            contrasena += clave[i];
            if ((i + 1) < clave.length() && clave[i] == clave[i + 1]) {
                contrasena += '(';
                int j = i + 2;
                while (j < clave.length() && clave[j] == clave[i]) {
                    j++;
                }
                contrasena += clave.substr(i + 1, j - i - 1);
                contrasena += ')';
                i = j - 1;
            }
        }
    }

    return contrasena;
}
