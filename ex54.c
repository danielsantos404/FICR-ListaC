#include <stdio.h>
#include <locale.h>

int main()
{
	float vetor[10];
	float soma = 0.0, media = 0.0;
	int i, acima = 0;

	setlocale(LC_ALL, "");
	printf("========== ACIMA DA MÉDIA DO BALACOBACO ==========\n");
	printf("\nInforme os 10 números para o vetor:\n");

	for (i = 0; i < 10; i++) {
		printf("Informe o %dº valor: ", i + 1);
		scanf("%f", &vetor[i]);
	}

	for (i = 0; i < 10; i++) {
		soma = soma + vetor[i];
	}
	
	media = soma / i;
	
	for (i = 0; i < 10; i++) {
		if (vetor[i] > media) {
			acima++;
		}
	}
	
	printf("\n==================== RESULTADO ===================\n");
	printf("%i elemento(s) do vetor está acima da média %.2f\n", acima, media);
	printf("==================================================\n");
	
	return 0;
}