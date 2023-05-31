#include <iostream>

int main() {
    // Ejemplo del operador && en C++

    int edad = 25;
    bool tieneLicencia = true;

    // Verificar si la persona cumple con ambas condiciones: edad >= 18 y tieneLicencia == true
    if (edad >= 18 && tieneLicencia) {
        std::cout << "La persona cumple con ambas condiciones." << std::endl;
    } else {
        std::cout << "La persona no cumple con ambas condiciones." << std::endl;
    }

    return 0;
}
