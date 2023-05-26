#pragma once
#ifndef CODIFICADOR_H
#define CODIFICADOR_H

#include <string>

class Codificador {
private:
    std::string nombre;
    std::string apellido;
    std::string telefono;
    std::string clave;

public:
    void ingresarDatos();
    void validarLongitud();
    std::string generarContrasenaEncriptada();
};

#endif  // CODIFICADOR_H