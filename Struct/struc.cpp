//En C++, struct es una forma de definir un nuevo tipo de datos que agrupa distintos tipos de datos bajo una sola entidad. Los miembros de un struct pueden ser de cualquier tipo de datos, incluyendo otros struct. Los struct son especialmente útiles cuando se quiere agrupar variables relacionadas bajo un mismo nombre.

#include <iostream>
#include <string>

using namespace std;

// Definición del struct
struct Persona {
    string nombre;
    int edad;
    char genero;
};

int main() {
    // Ejemplo de uso de struct en C++

    // Declaración e inicialización de una variable del tipo Persona
    Persona persona1 = {"Juan", 25, 'M'};

    // Acceso y modificación de los miembros del struct
    cout << "Nombre: " << persona1.nombre << endl;  // Imprime "Juan"
    cout << "Edad: " << persona1.edad << endl;      // Imprime 25
    persona1.genero = 'H';                         // Modifica el valor del miembro genero

    return 0;
}
