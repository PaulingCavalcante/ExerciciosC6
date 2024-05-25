#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define size 47

void ex1();
void ex2();
void ex3();
void ex4();
void ex5();

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int escolha;

	printf("\nEscolha o exerc�cio (1 a 5) ou 0 para sair: ");
	scanf("%i", &escolha);

	switch (escolha)
	{
	case 0:
		printf("\nAt� mais!\n");
		return 0;
		break;
	case 1:
		printf("\nPal�ndromo\n");
		ex1();
		main();
		break;
	case 2:
		printf("\nCaractere existente\n");
		ex2();
		main();
		break;
	case 3:
		printf("\nTrocar 8 posi��es\n");
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
		printf("\nExerc�cio n�o encontrado\n");
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
		printf("A palavra � um pal�ndromo.\n");
	else
		printf("A palavra n�o � um pal�ndromo.\n");

	printf("\n");
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
			resultado = 1;
			break;
		}
	}

	system("cls");
	if (resultado == 0)
		printf("Letra n�o encontrada na palavra");
	else
		printf("Letra encontrada na %i� posi��o.", resultado);
	printf("\n");
}

void ex3()
{
}

void ex4()
{
	char palavra[11];
	int i, j, resultado = 0;

	printf("Digite at� dez caracteres: ");
	scanf("%s", palavra);
	fflush(stdin);

	j = strlen(palavra) > 10 ? 10 : strlen(palavra); // s� ser�o considerados os 10 primeiros caracteres

	for (i = 0; i < j; i++)
	{
		if (palavra[i] != 'a' && palavra[i] != 'e' && palavra[i] != 'i' && palavra[i] != 'o' && palavra[i] != 'u')
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