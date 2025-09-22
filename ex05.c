#include <stdio.h>
#include <locale.h>

float cen, pol;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("========== CONVERSOR DE CENTÍMETROS PARA POLEGADAS DO BALACOBACO ==========\n");
	printf("Informe o valor em CENTÍMETROS (use virgula para valor decimal): ");
	scanf("%f", &cen);
	pol = cen / 2.54;
	printf("===========================================\n");
	printf("%.2f centímetros são %.2f polegadas.\n", cen, pol);
	printf("===========================================");
	return 0;
}
