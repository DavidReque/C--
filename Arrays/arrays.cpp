#include <iostream>

using namespace std;

int main() {
    // Ejemplo de arrays en C++

    // Declaración de un array de enteros sin inicializarlo
    int miArray[5];

    // Inicialización de un array de enteros con valores específicos
    int numeros[5] = {10, 20, 30, 40, 50};

    // Acceso y modificación de elementos del array
    cout << "Elemento 0: " << numeros[0] << endl;  // Imprime 10
    numeros[2] = 35;  // Modifica el tercer elemento a 35

    // Declaración e inicialización de un array de caracteres (cadena de texto)
    char nombre[] = "Juan";

    // Imprimir el contenido del array de caracteres
    cout << "Nombre: " << nombre << endl;  // Imprime "Juan"

    // Declaración e inicialización de un array de booleanos
    bool booleanos[3] = {true, false, true};

    // Imprimir los elementos del array de booleanos usando un bucle for
    cout << "Array de booleanos: ";
    for (int i = 0; i < 3; i++) {
        cout << booleanos[i] << " ";  // Imprime true false true
    }
    cout << endl;

    return 0;
}
