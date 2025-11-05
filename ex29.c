#include <stdio.h>
#include <locale.h>

int main()
{
	float numero;
	int cont = 0;
	
	setlocale(LC_ALL, "Portuguese");
	printf("======== FAIXA ENTRE 100 E 200 DO BALACOBACO ========\n");
	
	for (cont = 1; cont <= 5; cont++) {
		printf("Informe um número (use VÍRGULA para decimais): ");
	   	scanf("%f", &numero);
	   	
	   	if (numero >= 100 && numero <= 200) {
			   printf("Voce digitou um número entre 100 e 200\n");
   			   printf("=====================================================\n");
		   } else {
			   printf("Voce digitou um número fora da faixa entre 100 e 200\n");
			   printf("=====================================================\n");
		   }
	}
	
	return 0;
}
