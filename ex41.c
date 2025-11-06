#include <stdio.h>
#include <locale.h>

int main()
{
	int k = 2;
	int i = 0;
	int n, calculo;

	setlocale(LC_ALL, "Portuguese");
	printf("==== SEQUÊNCIA DE POTENCIALIZAÇÕES DO BALACOBACO ====\n");
	printf("\n                 Sendo N = 3 e K = 2:\n\n");
	
	for (n = 1; n <= 3; n++) {
		i++;
		calculo = pow(k, i);
		printf("                 K elevado a %i = %i\n", i, calculo);	
	}
	
	printf("\n=====================================================");

	return 0;
}