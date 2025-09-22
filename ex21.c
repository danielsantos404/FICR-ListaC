#include <stdio.h>
#include <locale.h>

int l1, l2, l3;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("========================= TRIÂNGULOS DO BALACOBACO ==========================\n");
	printf("Informe o primeiro lado do triângulo: ");
	scanf("%i", &l1);
	printf("Informe o segundo lado do triângulo:  ");
	scanf("%i", &l2);
	printf("Informe o terceiro lado do triângulo: ");
	scanf("%i", &l3);
	
	while(l1 > l2 + l3 || l2 > l1 + l3 || l3 > l1 + l2)
	{
	printf("=============================================================================\n");
	printf("ERRO: O comprimento de cada lado de um triângulo deve ser\nmenor do que a soma dos comprimentos dos outros dois lados.\n");
	printf("=============================================================================\n");
	printf("Informe o primeiro lado do triângulo: ");
	scanf("%i", &l1);
	printf("Informe o segundo lado do triângulo:  ");
	scanf("%i", &l2);
	printf("Informe o terceiro lado do triângulo: ");
	scanf("%i", &l3);
	}

	printf("=============================================================================\n");
	if (l1 == l2 && l2 == l3) {
		printf("Por serem todos iguais, os valores informados formam um triângulo EQUILÁTERO!\n");
		printf("  %i\n%i   %i\n", l1, l2, l3);
	} else if (l1 == l2 || l1 == l3 || l2 == l3)
	{
		printf("Por ter dois iguais, os valores informados formam um triângulo ISÓSCELE!\n");
		printf("  %i\n%i   %i\n", l1, l2, l3);
	} else if (l1 != l2 || l1 != l3 || l2 != l3)
	{
		printf("Por ter todos diferentes, os valores informados formam um triângulo ESCALENO!\n");
		printf("  %i\n%i   %i\n", l1, l2, l3);
	}
	printf("=============================================================================");
	return 0;
}
