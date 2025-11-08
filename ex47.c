#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
	int sexo;
	float h = 0.0, ideal = 0.0;

	setlocale(LC_ALL, "");
	printf("============================== PESO IDEAL DO BALACOBACO ==============================\n");
	printf("\nInforme sua altura (use vírgula para cm ou negativo para encerrar o programa): ");
	scanf("%f", &h);

	
	while (h >= 1 && h <= 2) {
		printf("Informe seu sexo (use <1> para FEMININO e <2> para MASCULINO): ");
		scanf("%i", &sexo);
		
		if (h < 0) {
			exit(0);
		} else {
			if (sexo == 2) {
				ideal = 72.7 * h - 58;
				printf("Seu peso ideal é de %.3fkg", ideal);
			} else if (sexo == 1) {
				ideal = 62.1 * h - 44.7;
				printf("Seu peso ideal é de %.3fkg", ideal);
			} else {
				printf("Informe um sexo entre masculino e feminino!");
			}
			
			printf("\n\nInforme sua altura (use vírgula para cm ou negativo para encerrar o programa): ");
			scanf("%f", &h);
		}
			
	}
	printf("\n======================================================================================\n");	
	printf("\nEncerrando programa...");
	printf("\n\n======================================================================================\n");

	return 0;
}
