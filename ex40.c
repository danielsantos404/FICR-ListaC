#include <stdio.h>
#include <locale.h>

int main()
{
	double K, N, calculo;

	setlocale(LC_ALL, "Portuguese");
	printf("============= POTENCIALIZAÇÃO DO BALACOBACO =============\n");

	printf("Informe o valor de K (use vírgula para decimais): ");
	scanf("%lf", &K);
	
	printf("Informe o valor de N (use vírgula para decimais): ");
	scanf("%lf", &N);

	calculo = pow(K, N);

	printf("\nK (%.2lf) elevado a N (%.2lf) = %.2lf\n", K, N, calculo);
	printf("=========================================================");

	return 0;
}