#include <stdio.h>
#include <locale.h>

int main()
{
	float vetorA[10], vetorB[10];
	int i;

	setlocale(LC_ALL, "");
	printf("=========== ESPELHAMENTO DE VETOR DO BALACOBACO ===========\n");

	printf("\nInforme os 10 números para o vetor A:\n");
	for (i = 0; i < 10; i++) {
		printf("Informe o %dº valor: ", i + 1);
		scanf("%f", &vetorA[i]);
	}
	
	printf("\n===========================================================\n\n");
	printf("Vetor A:\n");
	for (i = 0; i < 10; i++) {
		printf("%.2f  ", vetorA[i]);
	}

	printf("\n\nVetor B:\n");
	for (i = 0; i < 10; i++) {
		vetorB[i] = vetorA[9 - i];
		printf("%.2f  ", vetorB[i]);
	}
	printf("\n\n===========================================================\n");	
	return 0;
}