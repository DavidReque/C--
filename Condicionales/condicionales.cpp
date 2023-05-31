#include <iostream>

int main() {
    // Ejemplo de condicionales en C++

    // Declaración e inicialización de variables
    int numero = 10;

    // Condicional if
    if (numero > 0) {
        std::cout << "El número es positivo" << std::endl;
    }

    // Condicional if-else
    if (numero % 2 == 0) {
        std::cout << "El número es par" << std::endl;
    } else {
        std::cout << "El número es impar" << std::endl;
    }

    // Condicional if-else if-else
    if (numero > 10) {
        std::cout << "El número es mayor que 10" << std::endl;
    } else if (numero < 10) {
        std::cout << "El número es menor que 10" << std::endl;
    } else {
        std::cout << "El número es igual a 10" << std::endl;
    }

    return 0;
}
