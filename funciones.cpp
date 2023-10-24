//
// Created by Oblitionmaster on 23/10/2023.
//
#include <iostream>

// Referencias
void referencia(int a) {
    int& ref = a;
    ref /= 33;
    std::cout << "El valor nuevo de a es: " << a << std::endl;
}

// Tipo void
void holamundo() {
    std::cout << "Hola mundo!" << std::endl;
}

