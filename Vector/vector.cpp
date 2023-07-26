//En C++, un vector es una clase de la biblioteca estándar que proporciona un contenedor dinámico de elementos, lo que significa que su tamaño puede cambiar durante la ejecución del programa. Los vector son muy útiles cuando se necesita una colección de elementos que puede crecer o reducirse dinámicamente.

#include <iostream>
#include <vector> // Biblioteca vector para trabajar con vectores.

using namespace std;

int main() {
    // Ejemplo de uso de vector en C++

    // Declaración e inicialización de un vector de enteros
    vector<int> numeros = {10, 20, 30, 40, 50};

    // Acceso y modificación de elementos del vector
    cout << "Elemento en la posición 2: " << numeros[2] << endl;  // Imprime 30
    numeros[3] = 45;  // Modifica el elemento en la posición 3 a 45

    // Agregar elementos al vector
    // Para agregar elementos al vector, se utiliza la función push_back, que agrega un nuevo elemento al final del vector.
    numeros.push_back(60);  // Agrega el elemento 60 al final del vector

    // Imprimir todos los elementos del vector usando un bucle for
    cout << "Todos los elementos del vector:" << endl;
    for (int i = 0; i < numeros.size(); i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
