#include <stdio.h>
#include <locale.h>

float A, B, auxiliar;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("========= INVERSOR DE VALORES DO BALACOBACO =========\n");
	printf("Informe o valor de A (use virgula para valor decimal): ");
	scanf("%f", &A);
	printf("Informe o valor de B (use virgula para valor decimal): ");
	scanf("%f", &B);
	printf("===========================================\n");
	printf("Valores originais: A = %.2f e B = %.2f\n", A, B);
	auxiliar = A;
	A = B;
	B = auxiliar;
	printf("Valores trocados: A = %.2f e B = %.2f\n", A, B);
	printf("===========================================");
	return 0;
}
