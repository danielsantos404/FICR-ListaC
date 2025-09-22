#include <stdio.h>
#include <locale.h>

int n1, n2, n3;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("============ ORDEM CRESCENTE DO BALACOBACO ============\n");
	printf("Informe o primeiro número inteiro: ");
	scanf("%i", &n1);
	printf("Informe o segundo número inteiro:  ");
	scanf("%i", &n2);
	printf("Informe o terceiro número inteiro: ");
	scanf("%i", &n3);
	printf("=======================================================\n");

	while(n1 == n2 || n1 == n3 || n2 == n3)
	{
		printf("ERRO: Algunas dos valores são iguais, tente novamente!!!\n");
    	printf("Informe o primeiro número inteiro: ");
		scanf("%i", &n1);
		printf("Informe o segundo número inteiro: ");
		scanf("%i", &n2);
	   	printf("Informe o terceiro número inteiro: ");
		scanf("%i", &n3);
	}

	if (n1 > n2 && n1 > n3 && n2 > n3) {
		printf("Os valores informados em ordem crescente: %i -> %i -> %i\n", n3, n2, n1);
	} else if (n1 > n2 && n1 > n3 && n3 > n2)
	{
		printf("Os valores informados em ordem crescente: %i -> %i -> %i\n", n2, n3, n1);
	} else if (n2 > n1 && n2 > n3 && n1 > n3)
	{
		printf("Os valores informados em ordem crescente: %i -> %i -> %i\n", n3, n1, n2);
	} else if (n2 > n1 && n2 > n3 && n3 > n1)
	{
		printf("Os valores informados em ordem crescente: %i -> %i -> %i\n", n1, n3, n2);
	} else if (n3 > n1 && n3 > n2 && n1 > n2)
	{
		printf("Os valores informados em ordem crescente: %i -> %i -> %i\n", n2, n1, n3);
	} else if (n3 > n1 && n3 > n2 && n2 > n1)
	{
		printf("Os valores informados em ordem crescente: %i -> %i -> %i\n", n1, n2, n3);
	}
	printf("=======================================================");
	return 0;
}
