// Programa para calcular la media de una serie de numeros positivos.
#include <iostream>

int main() {

    int numero; // Variable numero
    int contador = 0; // Valor de la variable contador
    int suma = 0; // Valor de la variable suma

    std::cout << "Ingresa Datos numericos, para finalizar introduce el numero '0'" << std::endl;
    
    do {
        std::cout << "Introduce un numero: ";
        std::cin >> numero;

        if (numero > 0) {
            suma += numero;
            contador++;
        }
    } while (numero != 0);

    if (contador > 0) {
        float media = static_cast<float>(suma) / contador;
        std::cout << "La media de los numeros introducidos es: " << media << std::endl;
    } else {
        std::cout << "No se introdujeron numeros positivos." << std::endl;
    }

    return 0;
}
