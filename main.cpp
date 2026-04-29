#include <iostream>
#include "taylor.h"
int main() {
    double x;
    int n;
    int opcion;
    std::cout << "1. Seno\n2. Coseno\n3. Raiz cuadrada\nOpcion: ";
    std::cin >> opcion;
    std::cout << "Ingrese valor de x: ";
    std::cin >> x;
    std::cout << "Numero de terminos: ";
    std::cin >> n;
    if(opcion == 1) {
        std::cout << "Seno: " << seno(x, n) << std::endl;
    }
    else if(opcion == 2) {
        std::cout << "Coseno: " << coseno(x, n) << std::endl;
    }
    else if(opcion == 3) {
        if(x <= 0) {
            std::cout << "Error: x debe ser positivo\n";
        } else {
            std::cout << "Raiz: " << raiz(x, n) << std::endl;
        }
    }
    return 0;
}
