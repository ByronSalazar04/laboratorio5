#include <iostream>

void ordenarNumeros(int &a, int &b, int &c) {

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        int temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
}

int main() {
    int num1, num2, num3;

    std::cout << "Ingrese el primer numero entero: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo numero entero: ";
    std::cin >> num2;
    std::cout << "Ingrese el tercer numero entero: ";
    std::cin >> num3;

    ordenarNumeros(num1, num2, num3);

    std::cout << "Los numeros ordenados de menor a mayor son: " << num1 << ", " << num2 << ", " << num3 << std::endl;

    return 0;
}

