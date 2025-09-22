#include <stdio.h>
#include <locale.h>

int valor;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("================ INVERSOR DE NEGATIVOS DO BALACOBACO ================\n");
	printf("Informe um valor inteiro: ");
	scanf("%i", &valor);
	
	if (valor >= 0) {
		printf("O valor informado é positivo ou zero. VALOR: %i\n", valor);
	} else
	{
		valor = valor * -1;
		printf("O valor informado é negativo mas terá seu sinal invertido. VALOR: %i\n", valor);
	}
	
	printf("=====================================================================");
	return 0;
}
