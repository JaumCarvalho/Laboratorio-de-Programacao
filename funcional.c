#include <stdio.h>

// Paradigma Funcional
int calcularFatorial(int n) {
    return (n == 0) ? 1 : n * calcularFatorial(n - 1);
}

void main() {
    int numero = 5;
    int fatorial = calcularFatorial(numero);
    printf("O fatorial de %d é %d\n", numero, fatorial);
}
