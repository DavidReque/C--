#include <iostream>

using namespace std;

// Declaración de la función recursiva para calcular el factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Caso base: el factorial de 0 y 1 es 1
    } else {
        return n * factorial(n - 1); // Llamada recursiva con un subproblema más pequeño
    }
}

int main() {
    // Ejemplo de función recursiva para calcular el factorial

    int numero = 5;
    int resultado = factorial(numero); // Llamada a la función factorial

    cout << "El factorial de " << numero << " es: " << resultado << endl;

    return 0;
}
