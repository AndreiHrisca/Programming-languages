#include <iostream>

int main() {
    // Variable almacenada en el STACK
    int stackVar = 10;

    // Variable almacenada en el HEAP (memoria dinámica)
    int* heapVar = new int(20);

    // Mostrar valores iniciales y direcciones de memoria
    std::cout << "STACK - Valor: " << stackVar
              << ", Direccion: " << &stackVar << std::endl;

    std::cout << "HEAP  - Valor: " << *heapVar
              << ", Direccion: " << heapVar << std::endl;

    // Modificar los valores
    stackVar = 30;
    *heapVar = 40;

    // Mostrar valores y direcciones tras la modificación
    std::cout << "STACK (modificado) - Valor: " << stackVar
              << ", Direccion: " << &stackVar << std::endl;

    std::cout << "HEAP  (modificado) - Valor: " << *heapVar
              << ", Direccion: " << heapVar << std::endl;

    // Liberar memoria dinámica
    delete heapVar;

    return 0;
}