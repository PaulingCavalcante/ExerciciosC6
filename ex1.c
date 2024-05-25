#include <stdio.h>
#include <locale.h>
#include <string.h>

#define size 47

/*1 - Faça um programa que receba uma palavra e diga se ela é ou não um
palíndromo. Palíndromos são palavras que possuem a mesma leitura se lidas
tanto da direita para esquerda quanto da esquerda para direita. Exemplos:
reter, arara, ovo, osso, radar, etc?*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    char str[size];
    int i, j;

    while (1)
    {
    	char keep;
    	int palindromo = 1;
        printf("Digite uma palavra: ");
        scanf("%s", str);
   
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            palindromo = 0; 
            break;
        }
    }

    if (palindromo) {
        printf("A palavra é um palíndromo.\n");
    } else {
        printf("A palavra não é um palíndromo.\n");
    }
		printf("\n");				
    }
    return 0;
}
