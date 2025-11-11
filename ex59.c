#include <stdio.h>
#include <locale.h>

int main()
{
	float vetor[10], maiorValor = 0.0, maiorPosicao = 0.0;
	int i;

	setlocale(LC_ALL, "");
	printf("=========== MAIOR VALOR DO VETOR DO BALACOBACO ===========\n");

	printf("\nInforme os 10 números para o vetor:\n");
	for (i = 0; i < 10; i++) {
		printf("Informe o %dº valor: ", i + 1);
		scanf("%f", &vetor[i]);
		if (vetor[i] > maiorValor) {
			maiorValor = vetor[i];
			maiorPosicao = i;
		}
	}
	
	printf("\n==========================================================\n\n");
	printf("Maior valor informado: %.2f\n", maiorValor);
	printf("Posição do maior valor: %.2f\n", maiorPosicao);
	printf("OBS: Vetores começam com a posição 0!\n");
	printf("\n==========================================================\n");	
	return 0;
}