#include <iostream>

using namespace std;

int main() {
    // Ejemplo de arrays bidimensionales en C++

    // Declaración e inicialización de un array bidimensional de enteros
    int matriz[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Acceso y modificación de elementos de la matriz
    cout << "Elemento en la fila 1, columna 2: " << matriz[1][2] << endl;  // Imprime 7
    matriz[2][3] = 15;  // Modifica el elemento en la fila 2, columna 3 a 15

    // Imprimir todos los elementos de la matriz usando dos bucles for
    cout << "Todos los elementos de la matriz:" << endl;
    for (int fila = 0; fila < 3; fila++) {
        for (int columna = 0; columna < 4; columna++) {
            cout << matriz[fila][columna] << " ";
        }
        cout << endl;
    }

    return 0;
}
