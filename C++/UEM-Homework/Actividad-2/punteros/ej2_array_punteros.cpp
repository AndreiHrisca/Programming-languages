#include <iostream>

int main() {
    int array[5] = {10, 20, 30, 40, 50};

    // Puntero al primer elemento del array
    int* ptr = array;

    for (int i = 0; i < 5; i++) {
        std::cout << "Elemento " << i
                  << " - Valor: " << *(ptr + i)
                  << ", Direccion: " << (ptr + i)
                  << std::endl;
    }

    return 0;
}