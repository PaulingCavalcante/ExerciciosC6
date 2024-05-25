#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define size 47

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int escolha;

	printf("\nEscolha o exercício (1 a 5) ou 0 para sair: ");
	scanf("%i", &escolha);

	switch (escolha)
	{
	case 0:
		printf("\nAté mais!\n");
		return 0;
		break;
	case 1:
		printf("\nPalíndromo\n");
		ex1();
		main();
		break;
	case 2:
		printf("\nCaracter existente\n");
		ex2();
		main();
		break;
	case 3:
		printf("\nTrocar 8 posições\n");
		ex3();
		main();
		break;
	case 4:
		printf("\nConsoante\n");
		ex4();
		main();
		break;
	case 5:
		printf("\nMatriz\n");
		ex5();
		main();
		break;
	default:
		printf("\nExercício não encontrado\n");
		main();
	}

	return 0;
}

void ex1()
{
	char str[size];
	int i, j;

	int resposta = 1;
	printf("Digite uma palavra: ");
	scanf("%s", str);

	for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
	{
		if (str[i] != str[j])
		{
			resposta = 0;
			break;
		}
	}

	if (resposta)
		printf("A palavra é um palíndromo.\n");
	else
		printf("A palavra não é um palíndromo.\n");

	printf("\n");
}

void ex2()
{
	char palavra[47], letra;
	int j, resultado = 0;

	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	printf("Digite uma letra: ");
	scanf(" %c", &letra);

	for (j = 0; j < strlen(palavra); j++)
	{
		if (palavra[j] == letra)
		{
			resultado = j + 1;
			break;
		}
	}

	system("cls");
	if (resultado == 0)
	{
		printf("Letra não encontrada na palavra");
	}
	else
	{
		printf("Letra encontrada na %iª posição.", resultado);
	}
	printf("\n");
}

void ex3()
{
}

void ex4()
{
	char palavra[11];
	int j, resultado = 0;

	printf("Digite dez caracteres: ");
	scanf("%s", palavra);

	for (j = 0; j < 10; j++)
	{
		if (palavra[j] != 'a' && palavra[j] != 'e' && palavra[j] != 'i' && palavra[j] != 'o' && palavra[j] != 'u')
		{
			resultado++;
		}
	}

	system("cls");
	printf("Foram encontradas %i consoantes", resultado);
	printf("\n");
}

void ex5()
{
}