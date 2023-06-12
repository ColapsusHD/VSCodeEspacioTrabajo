// Programa que cuenta el total de ceros en unos numeros.
#include <iostream>
#include <string>

int countZeros(int num) {
    int count = 0;
    while (num > 0) {
        if (num % 10 == 0) {
            count++;
        }
        num /= 10;
    }
    return count;
}

int main() {
    std::string choice;
    int number;
    int totalZeros = 0;

    do {
        std::cout << "Ingrese un numero: ";
        std::cin >> number;

        int zeros = countZeros(number);
        totalZeros += zeros;

        std::cout << "El numero de ceros en " << number << " es: " << zeros << std::endl;

        std::cout << "Desea agregar mas numeros? (S/N): ";
        std::cin >> choice;
    } while (choice == "S" || choice == "s");

    std::cout << "El total de ceros es: " << totalZeros << std::endl;

    return 0;
}
