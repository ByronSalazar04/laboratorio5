#include <iostream>

int factorial(int numero) {
    int resultado = 1;

    if (numero == 0) {
        return 1;
    }

    while (numero > 0) {
        resultado *= numero;
        numero--;
    }

    return resultado;
}

int main() {
    int numero;

    std::cout << "Ingrese un numero entero: ";
    std::cin >> numero;

    if (numero < 0) {
        std::cout << "El factorial no está definido para números negativos." << std::endl;
        return 1; 
    }

    int resultado = factorial(numero);

    std::cout << "El factorial de " << numero << " es: " << resultado << std::endl;

    return 0;
}

