#include <stdio.h>
#include <locale.h>

int main()
{
	double S = 0.0;
	double x, denominador, valor_do_termo;
	int i; 

	setlocale(LC_ALL, "Portuguese");
	printf("========= TERMOS E SOMA DA SERIE DO BALACOBACO =========\n");

	printf("Informe o valor de x: ");
	scanf("%lf", &x);

	printf("\n--- Exibindo os 20 termos ---\n");

	for (i = 1; i <= 20; i++) {
		
		denominador = x - i;

		if (denominador == 0) {
			printf("Termo %d (1 / (%.2f - %d)): DIVISÃO POR ZERO (ignorado)\n", i, x, i);
		} else {
			valor_do_termo = 1.0 / denominador;
			printf("Termo %d (1 / (%.2f - %d)) = %lf\n", i, x, i, valor_do_termo);
			S = S + valor_do_termo;
		}
	}

	printf("O valor final da SOMA S é: %lf\n", S);
	printf("========================================================");

	return 0;
}