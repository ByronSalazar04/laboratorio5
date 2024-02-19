#include <iostream>

int contarDigitos(int numero) {
    int contador = 0;

    do {
        numero /= 10;
        contador++;
    } while (numero != 0);

    return contador;
}

int main() {
    int numero;

    std::cout << "Ingrese un numero entero: ";
    std::cin >> numero;

    int cantidadDigitos = contarDigitos(numero);

    std::cout << "El numero tiene " << cantidadDigitos << " digito(s)." << std::endl;

    return 0;
}

