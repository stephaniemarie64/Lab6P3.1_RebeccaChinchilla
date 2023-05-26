#include <iostream>
#include <algorithm>
using namespace std;

class Codificador {
public:
    void SEEdata();
    void In_datos(const string& a, const string& b, const string& c, const string& d);
    string generarContrasenaEncriptada();

private:
    string nombre;
    string apellido;
    string telefono;
    string clave;
};