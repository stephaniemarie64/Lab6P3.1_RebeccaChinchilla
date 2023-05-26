#include "Codificador.h"   

void codificador::SEEdata() {
	cout << "Nombre : " << nombre << endl;
	cout << "Appelido : " << apellido << endl;
	cout << "Telefono : " << telefono << endl;
	cout << "Clave : " << clave << endl;
}

void codificador::In_datos(string a, string b, string c, string d) {
	nombre = a;
	apellido = b;
	telefono = c;
	clave = d;
}

void codificador::password() {

	cout << nombre.substr(0, 2);
	cout << "(" << clave.substr(0, 1) << ")";//
	cout << apellido.substr(0, 2);
	cout << "(" << clave.substr(1, 1) << ")";//
	cout << telefono.substr(0, 2);
	cout << "(" << clave.substr(2, 1) << ")";/////
	cout << nombre.substr(2, 2);
	cout << "(" << clave.substr(3, 1) << ")";////
	cout << apellido.substr(2, 2);
	cout << "(" << clave.substr(4, 1) << ")";
	cout << telefono.substr(2, 2);
	cout << "(" << clave.substr(5, 1) << ")";
	cout << nombre.substr(4, 4);
	cout << "(" << clave.substr(6, 1) << ")";
	cout << apellido.substr(4, 2);



	if (clave.length() < 8) {
		cout << telefono.substr(4, 4);
	}
	else {
		cout << "(" << clave.substr(7, 1) << ")";
		cout << telefono.substr(4, 2);
		cout << apellido.substr(6, 2);
		cout << telefono.substr(6, 2);
	}

}