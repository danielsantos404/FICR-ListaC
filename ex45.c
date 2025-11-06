#include <stdio.h>
#include <locale.h>

int main()
{
	int n, produto, cont;

	setlocale(LC_ALL, "Portuguese");
	printf("============================== TABUADA DO BALACOBACO ==============================\n");
	printf("Informe um valor inteiro positivo: ");
	scanf("%i", &n);
	
	for (cont = 1; cont <= 10; cont++) {
	   	produto = n * cont;
		printf("%i X %i = %i\n", n, cont, produto);		
	}
	
	printf("=================================================================================\n");

	return 0;
}
