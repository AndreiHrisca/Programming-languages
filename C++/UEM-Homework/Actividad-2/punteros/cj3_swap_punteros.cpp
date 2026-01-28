#include <iostream>

// Funcion que intercambia valores usando punteros
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5;
    int y = 10;

    std::cout << "Antes del intercambio:" << std::endl;
    std::cout << "x = " << x << ", y = " << y << std::endl;

    swap(&x, &y);

    std::cout << "Despues del intercambio:" << std::endl;
    std::cout << "x = " << x << ", y = " << y << std::endl;

    return 0;
}