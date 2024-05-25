#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define size 47
#define number 16

void ex1();
void ex2();
void ex3();
void ex4();
void ex5();

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int escolha;

	printf("Escolha o exercício (1 a 5) ou 0 para sair\n\n");

	printf("1- Verificação de Palíndromo;\n");
	printf("2- Busca de Caractere em String;\n");
	printf("3- Troca de Valores em Vetor de Floats;\n");
	printf("4- Contagem de Consoantes em Vetor de Caracteres;\n");
	printf("5- Matriz com Borda Preenchida.\n");

	printf("Escolha: ");
	scanf("%i", &escolha);

	printf("\n");

	switch (escolha)
	{
	case 0:
		printf("\nAté mais!\n");
		return 0;
		break;
	case 1:
		printf("1- Verificação de Palíndromo\n");
		ex1();
		main();
		break;
	case 2:
		printf("2- Busca de Caractere em String;\n");
		ex2();
		main();
		break;
	case 3:
		printf("3- Troca de Valores em Vetor de Floats;\n");
		ex3();
		main();
		break;
	case 4:
		printf("4- Contagem de Consoantes em Vetor de Caracteres;\n");
		ex4();
		main();
		break;
	case 5:
		printf("5- Matriz com Borda Preenchida.\n");
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

	system("cls");

	if (resposta)
		printf("A palavra é um palíndromo.\n");
	else
		printf("A palavra não é um palíndromo.\n");

	printf("\n\n");
}

void ex2()
{
	char palavra[size], letra;
	int i, resultado = 0;

	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	printf("Digite uma letra: ");
	scanf(" %c", &letra);

	for (i = 0; i < strlen(palavra); i++)
	{
		if (palavra[i] == letra)
		{
			resultado = i + 1;
			break;
		}
	}

	system("cls");

	if (resultado == 0)
		printf("Letra não encontrada na palavra");
	else
		printf("Letra encontrada na %iª posição.", resultado);
	printf("\n\n");
}

void ex3()
{
	float numbers[number], aux;
	int i, j;

	for (i = 0; i < number; i++)
	{
		printf("Digite o %iº número: ", i + 1);
		scanf("%f", &numbers[i]);
	}

	system("cls");

	printf("Números inicialmente:");

	for (i = 0; i < number; i++)
	{
		printf("%.2f ", numbers[i]);
	}

	for (i = 0, j = number / 2; i < number / 2; i++, j++)
	{
		aux = numbers[i];
		numbers[i] = numbers[j];
		numbers[j] = aux;
	}

	printf("\nNúmeros reordenados:");

	for (i = 0; i < number; i++)
	{
		printf("%.2f ", numbers[i]);
	}

	printf("\n\n");
}

void ex4()
{
	char palavra[11];
	int i, j, resultado = 0;

	printf("Digite até dez caracteres: ");
	scanf("%s", palavra);
	fflush(stdin);

	j = strlen(palavra) > 10 ? 10 : strlen(palavra); // só serão considerados os 10 primeiros caracteres

	for (i = 0; i < j; i++)
	{
		if (palavra[i] != 'a' && palavra[i] != 'e' && palavra[i] != 'i' && palavra[i] != 'o' && palavra[i] != 'u')
		{
			resultado++;
		}
	}

	system("cls");
	printf("Foram encontradas %i consoantes", resultado);
	printf("\n\n");
}

void ex5()
{
}