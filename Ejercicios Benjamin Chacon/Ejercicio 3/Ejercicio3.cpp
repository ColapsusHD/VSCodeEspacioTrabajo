// Programa para el cálculo de los salarios mensuales de los empleados de una empresa.
#include <iostream>
#include <string>

using namespace std;

int main() {
    
    double horas, precioHora, salario; // Variable real
    string nombre; // Variable cadena
    char masDatos; // Variable caracter

    do {
        cout << "Ingrese el nombre del empleado: ";
        cin >> nombre;

        cout << "Ingrese las horas trabajadas por semana: ";
        cin >> horas;

        cout << "Ingrese el precio por hora: ";
        cin >> precioHora;

        if (horas <= 40) {
            salario = horas * precioHora;
        } else {
            double horasExtras = horas - 40;
            salario = (40 * precioHora) + (horasExtras * precioHora * 1.5);
        }

        cout << "El salario mensual de " << nombre << " es: " << salario << endl;

        cout << "Hay mas trabajadores? (s/n): ";
        cin >> masDatos;

    } while (masDatos == 's' || masDatos == 'S');

    return 0;
}
