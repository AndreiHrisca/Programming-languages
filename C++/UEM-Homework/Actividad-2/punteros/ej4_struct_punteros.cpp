#include <iostream>
#include <string>

// Definicion de la estructura Estudiante
struct Estudiante {
    std::string nombre;
    int edad;
};

int main() {
    // Crear un estudiante
    Estudiante alumno;
    alumno.nombre = "Andrei";
    alumno.edad = 28;

    // Puntero a la estructura
    Estudiante* ptr = &alumno;

    // Acceso a los datos usando el puntero
    std::cout << "Nombre: " << ptr->nombre << std::endl;
    std::cout << "Edad: " << ptr->edad << std::endl;

    return 0;
}