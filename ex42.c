#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	double S = 0.0;
	double X, A;
	double termo_a, termo_x, termo_total;
	double numerador_a, denominador_a;
	double numerador_x, denominador_x;
	int i; 

	setlocale(LC_ALL, "Portuguese");
	printf("======= NÚMEROS MUITO LOUQUINHOS E DO BALACOBACO =======\n");
	printf("Informe o valor de X: ");
	scanf("%lf", &X);

	printf("Informe o valor de A: ");
	scanf("%lf", &A);
	for (i = 1; i <= 20; i++) {
		numerador_a = (double)i;
		denominador_a = A - (i - 1);
		numerador_x = (double)(21 - i);
		denominador_x = pow(X, i);
		if (denominador_a == 0 || denominador_x == 0) {
			printf("Aviso: Divisão por zero no termo %d. Termo será pulado.", i);
		} else {
			termo_a = numerador_a / denominador_a;
			termo_x = numerador_x / denominador_x;
			termo_total = termo_a * termo_x;
			S = S + termo_total;
		}
	}

	printf("\n========================================================\n");
	printf("O valor final da soma S é: %lf\n", S);
	printf("========================================================\n");

	return 0;
}