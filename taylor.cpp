#include "taylor.h"
// factorial
double factorial(int n) {
    double r = 1;
    for(int i = 1; i <= n; i++) {
        r *= i;
    }
    return r;
}
// potencia
double potencia(double base, int exp) {
    double r = 1;
    for(int i = 0; i < exp; i++) {
        r *= base;
    }
    return r;
}
// seno (Taylor)
double seno(double x, int n) {
    double suma = 0;
    for(int i = 0; i < n; i++) {
        double termino = potencia(-1, i) * potencia(x, 2*i+1) / factorial(2*i+1);
        suma += termino;
    }
    return suma;
}
// coseno (Taylor)
double coseno(double x, int n) {
    double suma = 0;
    for(int i = 0; i < n; i++) {
        double termino = potencia(-1, i) * potencia(x, 2*i) / factorial(2*i);
        suma += termino;
    }
    return suma;
}
// raiz cuadrada usando Taylor alrededor de 1
// sqrt(x) ≈ 1 + (x-1)/2 - (x-1)^2/8 + ...
double raiz(double x, int n) {
    double suma = 1;
    double h = x - 1;

    for(int i = 1; i < n; i++) {
        double termino = potencia(-1, i-1) * factorial(2*i-3) * potencia(h, i) 
                        / (potencia(2, 2*i-1) * factorial(i) * factorial(i-1));
        suma += termino;
    }
    return suma;
}
