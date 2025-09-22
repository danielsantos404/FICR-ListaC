#include <stdio.h>
#include <locale.h>

int n1, n2;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("================== IGUALDADE DE NÚMEROS DO BALACOBACO ==================\n");
	printf("Informe o primeiro número inteiro: ");
	scanf("%i", &n1);
	printf("Informe o segundo número inteiro: ");
	scanf("%i", &n2);
	printf("========================================================================\n");
	if (n1 == n2) {
		printf("Os números informados são iguais.\n");
		printf("Ambos foram: %i\n", n1);
	} else if (n1 > n2)
	{
		printf("Os números informados são diferentes e primeiro é maior que o segundo.\n");
		printf("1º número: %i | 2º número: %i \n", n1, n2);
	} else
	{
		printf("Os números informados são diferentes e segundo é maior que o primeiro.\n");
		printf("1º número: %i | 2º número: %i \n", n1, n2);
	}
	printf("========================================================================");
	return 0;
}
