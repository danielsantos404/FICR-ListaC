#include <stdio.h>
#include <locale.h>

int main()
{
	float vetorA[10], vetorB[10], vetorC[10];
	int i;

	setlocale(LC_ALL, "");
	printf("============= CRUZAMENTO DE VETORES DO BALACOBACO =============\n");

	printf("\nInforme os 10 números para o vetor A:\n");
	for (i = 0; i < 10; i++) {
		printf("Informe o %dº valor: ", i + 1);
		scanf("%f", &vetorA[i]);
	}

	printf("\nInforme os 10 números para o vetor B:\n");		
	for (i = 0; i < 10; i++) {
		printf("Informe o %dº valor: ", i + 1);
		scanf("%f", &vetorB[i]);
	}
	
	for (i = 0; i < 10; i++) {
		vetorC[2 * i] = vetorA[i];
		vetorC[2 * i + 1] = vetorB[i];
	}

	printf("\n=============================== VETOR C ==============================\n\n");
	for (i = 0; i < 20; i++) {
		printf("%.2f  ", vetorC[i]);
	}
	
	printf("\n\n======================================================================\n");
	return 0;
}