#include <iostream>

int sumarDigitos(int numero) {
    int suma = 0;

    while (numero != 0) {
        suma += numero % 10;
        numero /= 10;
    }

    return suma;
}

int main() {
    int numero;

    std::cout << "Ingrese un numero entero: ";
    std::cin >> numero;

    int suma = sumarDigitos(numero);

    std::cout << "La suma de los digitos de " << numero << " es: " << suma << std::endl;

    return 0;
}

