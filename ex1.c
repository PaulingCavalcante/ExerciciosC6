/*#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int i, j;
    int palindromo = 1; // Assume que é um palíndromo

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    // Verifica se a palavra é um palíndromo
    for (i = 0, j = strlen(palavra) - 1; i < j; i++, j--) {
        if (palavra[i] != palavra[j]) {
            palindromo = 0; // Não é um palíndromo
            break;
        }
    }

    if (palindromo) {
        printf("A palavra é um palíndromo.\n");
    } else {
        printf("A palavra não é um palíndromo.\n");
    }

    return 0;
}*/


#include <stdio.h>
#include <locale.h>
#include <string.h>

#define size 100

/*1 - Faça um programa que receba uma palavra e diga se ela é ou não um
palíndromo. Palíndromos são palavras que possuem a mesma leitura se lidas
tanto da direita para esquerda quanto da esquerda para direita. Exemplos:
reter, arara, ovo, osso, radar, etc?*/

int main(int argc, char **argv)
{
    setlocale(LC_ALL, "Portuguese");

    char palavra[size];
    int i;
    while (1)
    {
        printf("Escreva um nome qualquer: ");
        fgets(str, size, stdin);
        printf(str); i = sizeof(str); printf(i);
        printf("\n");
    }
    return 0;
}