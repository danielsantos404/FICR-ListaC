#include <stdio.h>
#include <locale.h>

int main()
{
	int numero, cont, soma;
	
	setlocale(LC_ALL, "Portuguese");
	printf("======= SOMA DOS NÚMEROS ENTRE 1 E N DO BALACOBACO =======\n");
	printf("\nInforme um número: ", numero);
   	scanf("%i", &numero);
   	soma = 0;
	
	for (cont = 1; cont <= numero; cont++) {
		soma = soma + cont;
	}
	
	printf("A soma dos números entre 1 e %i é igual a <%i>.\n", numero, soma);
	printf("\n==========================================================");
	
	return 0;
}
