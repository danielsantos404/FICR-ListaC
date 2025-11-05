#include <stdio.h>
#include <locale.h>

int main()
{
	double S = 0; 
	double numerador;
	int i;

	setlocale(LC_ALL, "Portuguese");
	printf("======= MAIS SOMA DE FRAÇÕES DO BALACOBACO =======\n");

	for (i = 1; i <= 50; i++) {
		numerador = (2.0 * i) - 1; 
		S = S + (numerador / i);
	};

	printf("\nS = 1 + 3/2 + 5/3 + 7/4 + ... + 99/50\nS = %lf.\n", S);
	printf("\n==================================================");
	
	return 0;
}