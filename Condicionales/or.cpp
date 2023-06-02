#include <iostream>

int main() {
    // Ejemplo del operador || en C++

    int edad = 16;
    bool tienePermiso = true;

    // Verificar si la persona cumple al menos una de las condiciones: edad >= 18 o tienePermiso == true
    if (edad >= 18 || tienePermiso) {
        std::cout << "La persona cumple al menos una de las condiciones." << std::endl;
    } else {
        std::cout << "La persona no cumple ninguna de las condiciones." << std::endl;
    }

    return 0;
}
