#include <stdio.h>

// Paradigma Procedural
int calcularFatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; ++i) {
        resultado *= i;
    }
    return resultado;
}

void main() {
    int numero = 5;
    int fatorial = calcularFatorial(numero);
    printf("O fatorial de %d é %d\n", numero, fatorial);
}
