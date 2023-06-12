// Programa que suma de los números pares comprendidos entre 2 y 100.
#include <iostream>

int main() {
    
    int suma = 2; // Valor inicial de suma
    int numero = 4; // Valor inicial de numero

    do {
        suma += numero;
        numero += 2;
    } while (numero <= 100);

    std::cout << "La suma de los numeros pares entre 2 y 100 es: " << suma << std::endl;

    return 0;
}
