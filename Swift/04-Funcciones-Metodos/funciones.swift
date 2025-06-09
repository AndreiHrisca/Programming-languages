// Función simple
func saludar(nombre: String) -> String {
    return "Hola, \(nombre)!"
}
print(saludar(nombre: "Andrei"))

// Función con valor por defecto
func sumar(_ a: Int, _ b: Int = 10) -> Int {
    return a + b
}
print(sumar(5))       // 15
print(sumar(5, 3))    // 8

// Métodos en structs
struct Persona {
    var nombre: String
    func saludar() {
        print("Hola, soy \(nombre)")
    }
}

let persona = Persona(nombre: "Andrei")
persona.saludar()