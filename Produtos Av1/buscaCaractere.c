#include <stdio.h>

int buscaCaractere(char str[], char caractere, int posicao) {
    return (str[posicao]=='\0') ? 0 : (str[posicao] == caractere) ? 1 : buscaCaractere(str, caractere, posicao + 1);
}

void main() {
    char string[100];
    char caractere;

    printf("Digite uma string: ");
    scanf("%s", string);

    printf("Digite o caractere a ser procurado: ");
    scanf(" %c", &caractere);

    if (buscaCaractere(string, caractere, 0)) {
        printf("O caractere '%c' foi encontrado na string.\n", caractere);
    } else {
        printf("O caractere '%c' nao foi encontrado na string.\n", caractere);
    }
}
