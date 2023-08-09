// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

class Estudiante {
    public:
    string nombreEstudiante;
    int edad;
    float notas[2];
    float promedio, nota1, nota2;
    
    Estudiante (string pNombreEstudiante, int pEdad,
    float nota1, float nota2){
        nombreEstudiante = pNombreEstudiante;
        edad = pEdad;
        notas[0] = nota1;
        notas[1] = nota2;
        promedio = (nota1 + nota2 / 2);
    };
    
    void getEstudent () {
    cout << "Nombre: " << nombreEstudiante << endl;
    cout << "Edad: " << edad << endl;
    cout << "Notas: " << notas[0] << ", " << notas[1] << endl;
    cout << "Promedio: " << promedio << endl;
    };
    
};

int main() {
    string nombreEstudiante;
    int edad;
    float promedio, nota1, nota2;
    
    cout << "Ingrese el nombre del Estudiante: ";
    cin >> nombreEstudiante;
    
    cout << "Ingrese la edad del Estudiante: ";
    cin >> edad;
    
    cout << "Ingrese la nota 1 del Estudiante: ";
    cin >> nota1;
    
    cout << "Ingrese la nota 2 del Estudiante: ";
    cin >> nota2;
    
    Estudiante estudiante1(nombreEstudiante, edad, nota1, nota2);
    estudiante1.getEstudent();

    return 0;
}


