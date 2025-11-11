#include <stdio.h>
#include <locale.h>

int main()
{
	float vetor[10];
	float multi;
	int i;

	setlocale(LC_ALL, "");
	printf("======== MULTIPLICANDO POSIÇÕES ÍMPARES DO BALACOBACO ========\n");
	printf("\nInforme os 10 números para o vetor:\n");

	for (i = 0; i < 10; i++) {
		printf("Informe o %dº valor: ", i + 1);
		scanf("%f", &vetor[i]);
	}

	printf("\n==================== MULTIPLICANDO POR 5 =====================\n\n");
	for (i = 0; i < 10; i++) {
		if ( i % 2 != 0 ) {
 			multi = vetor[i] * 5.0;
			printf("Posição %i: %.2f X 5 = %.2f\n", i, vetor[i], multi);
		}
	}
	printf("OBS: Vetores começam com a posição 0 que é par!\n");
	printf("\n==============================================================\n");
	return 0;
}