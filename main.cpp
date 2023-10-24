#include <iostream>
#include "funciones.h"

// Constante simbólica
#define PI 3.14159265358979323846;
double area = 4*4*PI

// typedef
typedef unsigned char uchar;
uchar uno = 1;

// enumeración
enum numeros {
    dos [[maybe_unused]] = 2,
    tres = 3,
    cien [[maybe_unused]] = 100
};
numeros numeroFavorito = tres;

int main() {
    referencia(100);
    std::cout << std::endl;

    std::cout << "El area de un circulo con radio 4 es: " << area << std::endl;
    std::cout << std::endl;

    holamundo();
    std::cout << std::endl;

    // Tipo void*
    void* memoria = std::malloc(3);
    char* cadena = static_cast<char*>(memoria);
    cadena[0] = 'H';
    cadena[1] = 'e';
    cadena[2] = 'y';
    std::cout << cadena << std::endl;
    std::cout << std::endl;

    std::cout << "El valor de uno es: " << uno << std::endl;
    std::cout << std::endl;

    std::cout << "Mi numero favorito es: " << numeroFavorito << std::endl;
    return 0;
}
