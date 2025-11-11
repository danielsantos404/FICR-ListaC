#include <stdio.h>
#include <locale.h>

int main()
{
	float vetor[10];
	float soma = 0.0, media = 0.0;
	int i;

	setlocale(LC_ALL, "");
	printf("========== MÉDIA DO VETOR DO BALACOBACO ==========\n");
	printf("\nInforme os 10 números para o vetor:\n");

	for (i = 0; i < 10; i++) {
		printf("Informe o %dº valor: ", i + 1);
		scanf("%f", &vetor[i]);
	}

	for (i = 0; i < 10; i++) {
		soma = soma + vetor[i];
	}
	
	media = soma / i;
	
	printf("\n==================== RESULTADO ===================\n");
	printf("A média dos 10 elementos do vetor é: %.2f\n", media);
	printf("==================================================\n");
	
	return 0;
}