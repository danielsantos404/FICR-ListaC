#include <stdio.h>
#include <locale.h>

int n1, n2, res;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("============== CALCULADORA DE MULTIPLICAÇÃO DO BALACOBACO ==============\n");
	printf("Informe o primeiro número: ");
	scanf("%i", &n1);
	printf("Informe o segundo número: ");
	scanf("%i", &n2);
	res = n1 * n2;
	printf("==============================\n");
	printf("%i X %i = %i\n", n1, n2, res);
	printf("==============================");
	return 0;
}
