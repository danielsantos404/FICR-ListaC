#include <stdio.h>
#include <locale.h>

int main()
{
	float vetor[10];
	float soma = 0.0;
	int i;

	setlocale(LC_ALL, "");
	printf("================== SOMA DO VETOR DO BALACOBACO ==================\n");
	printf("Informe os 10 números para o vetor:\n");

	for (i = 0; i < 10; i++) {
		printf("Informe o %dº valor: ", i + 1);
		scanf("%f", &vetor[i]);
	}

	for (i = 0; i < 10; i++) {
		soma = soma + vetor[i];
	}
	
	printf("\n=============================== RESULTADO ===============================\n");
	printf("A soma dos 10 elementos do vetor é: %.2f\n", soma);
	printf("=======================================================================\n");
	
	return 0;
}