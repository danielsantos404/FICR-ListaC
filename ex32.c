#include <stdio.h>
#include <locale.h>

int main()
{
	int numero, cont;
	int maior = 0;
	
	setlocale(LC_ALL, "Portuguese");
	printf("===== MAIOR NÚMERO DO BALACOBACO =====\n");
	
	for (cont = 1; cont <= 3; cont++) {
		printf("Informe o %i° número: ", cont);
	   	scanf("%i", &numero);
	   	
	   	if (numero >= maior) {
   			maior = numero;
		}
	}
	
	printf("\nO maior número informado foi -> %i", maior);
	printf("\n======================================");
	
	return 0;
}
