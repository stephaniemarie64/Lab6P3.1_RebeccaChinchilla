#include "Codificador.h"
#include <iostream>
#include <algorithm>  
using namespace std;

void Codificador::SEEdata() {
    cout << "Nombre: " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "Teléfono: " << telefono << endl;
    cout << "Clave: " << clave << endl;
}

void Codificador::In_datos(const string& a, const string& b, const string& c, const string& d) {
    nombre = a;
    apellido = b;
    telefono = c;
    clave = d;
}

string Codificador::generarContrasenaEncriptada() {
    string contrasenaEncriptada;

    contrasenaEncriptada += nombre.substr(0, 2);
    contrasenaEncriptada += "(" + clave.substr(0, 1) + ")";
    contrasenaEncriptada += apellido.substr(0, 2);
    contrasenaEncriptada += "(" + clave.substr(1, 1) + ")";
    contrasenaEncriptada += telefono.substr(0, 2);
    contrasenaEncriptada += "(" + clave.substr(2, 1) + ")";
    contrasenaEncriptada += nombre.substr(2, 2);
    contrasenaEncriptada += "(" + clave.substr(3, 1) + ")";
    contrasenaEncriptada += apellido.substr(2, 2);
    contrasenaEncriptada += "(" + clave.substr(4, 1) + ")";
    contrasenaEncriptada += telefono.substr(2, 2);
    contrasenaEncriptada += "(" + clave.substr(5, 1) + ")";
    contrasenaEncriptada += nombre.substr(4, 4);
    contrasenaEncriptada += "(" + clave.substr(6, 1) + ")";
    contrasenaEncriptada += apellido.substr(4, 2);

    if (clave.length() < 8) {
        contrasenaEncriptada += telefono.substr(4, 4);
    }
    else {
        contrasenaEncriptada += "(" + clave.substr(7, 1) + ")";
        contrasenaEncriptada += telefono.substr(4, 2);
        contrasenaEncriptada += apellido.substr(6, 2);
        contrasenaEncriptada += telefono.substr(6, 2);
    }

    return contrasenaEncriptada;
}
