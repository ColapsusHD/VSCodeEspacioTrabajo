// Programa que determina si la suma de cualquier pareja de ellos es igual al tercer numero o distinto.
#include <iostream>

int main() {
    int numero1, numero2, numero3;
    
    std::cout << "Ingrese el primer numero: ";
    std::cin >> numero1;
    
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> numero2;
    
    std::cout << "Ingrese el tercer numero: ";
    std::cin >> numero3;
    
    if (numero1 + numero2 == numero3) {
        std::cout << "Iguales" << std::endl;
    } else if (numero1 + numero3 == numero2) {
        std::cout << "Iguales" << std::endl;
    } else if (numero2 + numero3 == numero1) {
        std::cout << "Iguales" << std::endl;
    } else {
        std::cout << "Distintas" << std::endl;
    }
    
    return 0;
}
