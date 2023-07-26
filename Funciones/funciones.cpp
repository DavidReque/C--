#include <iostream>

using namespace std; 

// Declaración de función que suma dos números enteros y devuelve el resultado
int sumar(int a, int b) {
    int resultado = a + b;
    return resultado;
}

// Declaración de función que imprime un mensaje con el nombre dado
void saludar(string nombre) {
    cout << "Hola, " << nombre << ". ¡Bienvenido!" << endl;
}

int main() {
    // Ejemplo de funciones en C++

    // Llamando a la función sumar
    int numero1 = 5;
    int numero2 = 3;
    int suma = sumar(numero1, numero2);  // Llamada a la función sumar con los argumentos numero1 y numero2
    cout << "La suma de " << numero1 << " y " << numero2 << " es: " << suma << endl;

    // Llamando a la función saludar
    string nombre = "Juan";
    saludar(nombre);  // Llamada a la función saludar con el argumento nombre

    return 0;
}
