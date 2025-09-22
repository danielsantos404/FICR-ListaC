#include <stdio.h>
#include <locale.h>

float n1, n2, soma, multi, divi;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("============== CALCULADORA DE SOMA, PRODUTO E QUOCIENTE DO BALACOBACO ==============\n");
	printf("Informe o primeiro número (use vírgula para valor decimal): ");
	scanf("%f", &n1);
	printf("Informe o segundo número (use vírgula para valor decimal): ");
	scanf("%f", &n2);
	soma = n1 + n2;
	multi = n1 * n2;
	divi = n1 / n2;
	printf("========================\n");	
	printf("%.2f + %.2f = %.2f\n%.2f x %.2f = %.2f\n%.2f ÷ %.2f = %.2f\n", n1, n2, soma, n1, n2, multi, n1, n2, divi);
	printf("========================");	
	return 0.0;
}
