#include <stdio.h>
#include <locale.h>

int main()
{
	int n, quadrado;
	
	setlocale(LC_ALL, "Portuguese");
	printf("=================== QUADRADO DOS NÚMEROS DO BALACOBACO ===================\n");
	
	for (n = 15; n <= 30; n++) {
		quadrado = n * n;
		printf("%i ao quadrado = %i \n", n, quadrado);
	}

	printf("\n===================================================================");
	
	return 0;
}
