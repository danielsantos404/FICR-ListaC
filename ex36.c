#include <stdio.h>
#include <locale.h>

int main()
{
	double soma = 0; 
	int cont; 
	
	setlocale(LC_ALL, "Portuguese");
	printf("======= SOMA DE FRAÇÕES DO BALACOBACO =======\n");
	
	for (cont = 1; cont <= 10; cont++) {
		soma = soma + (1.0 / cont); 
	}
	
	printf("\nS = 1 + 1/2 + 1/3 + 1/4 + ... + 1/10\nS = %lf.\n", soma); 
	printf("\n=============================================");
	
	return 0;
}