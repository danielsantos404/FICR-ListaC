#include <stdio.h>
#include <locale.h>

int n1, n2, n3;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("================== TRÊS VALORES DO BALACOBACO ==================\n");
	printf("Informe o primeiro número inteiro: ");
	scanf("%i", &n1);
	printf("Informe o segundo número inteiro: ");
	scanf("%i", &n2);
	printf("Informe o terceiro número inteiro: ");
	scanf("%i", &n3);
	printf("=================================================================\n");
	
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

	if (n1 > n2 && n1 > n3) {
		printf("O maior valor informado foi: %i\n", n1);
	} else if (n2 > n1 && n2 > n3)
	{
		printf("O maior valor informado foi: %i\n", n2);
	} else
	{
		printf("O maior valor informado foi: %i\n", n3);
	}
	printf("=================================================================");
	return 0;
}
