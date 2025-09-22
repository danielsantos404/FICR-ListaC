#include <stdio.h>
#include <locale.h>

int valor, res;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("======== PAR OU IMPAR DO BALACOBACO ========\n");
	printf("Informe um valor INTEIRO: ");
	scanf("%i", &valor);
	
	if (valor % 2 == 0) {
		printf("O valor informado é PAR!!!\n");
	}
	else
	{
		printf("O valor informado é IMPAR!!!\n");
	}
	printf("============================================");
	return 0;
}
