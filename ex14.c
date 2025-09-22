#include <stdio.h>
#include <locale.h>

int valor, res;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("============= VALORES DO BALACOBACO =============\n");
	printf("Informe um valor INTEIRO: ");
	scanf("%i", &valor);
	
	if (valor < 0) {
		printf("O valor informado é NEGATIVO!!!\n");
	} else if (valor > 0)
	{
		printf("O valor informado é POSITIVO!!!\n");
	} else
	{
		printf("O valor informado é ZERO!!!\n");
	}
	printf("=================================================");
	return 0;
}
