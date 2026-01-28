#include <iostream>

int main() {
    int numero = 42;

    // Puntero que apunta a la variable numero
    int* ptr = &numero;

    std::cout << "Valor de la variable: " << numero << std::endl;
    std::cout << "Direccion de la variable: " << &numero << std::endl;
    std::cout << "Direccion usando el puntero: " << ptr << std::endl;

    return 0;
}