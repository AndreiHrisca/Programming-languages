// Arrays
var numeros = [1, 2, 3, 4, 5]
numeros.append(6)
print(numeros[0]) // 1

// Diccionarios
var capitales = [
    "España": "Madrid",
    "Francia": "París"
]
capitales["Italia"] = "Roma"
print(capitales["España"]!)

// Conjuntos (Sets)
var frutas: Set = ["manzana", "naranja", "plátano"]
frutas.insert("pera")
print(frutas.contains("manzana"))

// Tuplas
let coordenadas = (x: 10, y: 20)
print("x: \(coordenadas.x), y: \(coordenadas.y)")