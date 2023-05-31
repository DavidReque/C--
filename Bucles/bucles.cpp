#include <iostream>

int main() {
    // Ejemplo de bucles en C++

    // Bucle while
    int contador = 0;  // Inicializamos la variable contador en 0
    while (contador < 5) {  // Mientras contador sea menor que 5
        std::cout << "Contador: " << contador << std::endl;  // Imprimimos el valor actual de contador
        contador++;  // Incrementamos el valor de contador en 1
    }

    // Bucle for
    for (int i = 0; i < 5; i++) {  // Inicializamos i en 0; mientras i sea menor que 5; incrementamos i en 1 en cada iteración
        std::cout << "i: " << i << std::endl;  // Imprimimos el valor actual de i
    }

    return 0;
}
