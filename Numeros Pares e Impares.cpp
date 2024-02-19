#include <iostream>

int sumaParesImpares(int numero, int esPar) {
    int suma = 0;
    for (int i = 1; i <= numero; i++) {

        if ((esPar && i % 2 != 0) || (!esPar && i % 2 == 0)) {
            suma += i;
        }
    }
    return suma;
}
int main() {
    int numero;
    int opcion;
    
    std::cout << "Ingrese un numero entero: ";
    std::cin >> numero;
    std::cout << "Ingrese 0 para sumar pares o 1 para sumar impares: ";
    std::cin >> opcion;

    if (opcion != 0 && opcion != 1) {
        std::cout << "Opción inválida. Por favor, ingrese 0 para sumar pares o 1 para sumar impares." << std::endl;
        return 1; 
    }

    int resultado = sumaParesImpares(numero, opcion);
    if (opcion == 0)
        std::cout << "La suma de los numeros pares hasta " << numero << " es: " << resultado << std::endl;
    else
        std::cout << "La suma de los numeros impares hasta " << numero << " es: " << resultado << std::endl;

    return 0;
}

