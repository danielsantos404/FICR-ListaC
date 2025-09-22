#include <stdio.h>
#include <locale.h>

int macas;
float total;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("============ QUITANDA DE MAÇÃS DO BALACOBACO ===========\n");
	printf("===== R$0,30 CADA | R$0,25 A PARTIR DE 12 UNIDADES =====\n");
	printf("========================================================\n");
	printf("Quantas maçãs vocês deseja? ");
	scanf("%i", &macas);
	printf("========================================================\n");
	if (macas <= 12) {
		total = macas * 0.30;
		printf("TOTAL A PAGAR: %.2f\n", total);
	}
	else
	{
		total = macas * 0.25;
		printf("TOTAL A PAGAR: %.2f\n", total);
	}
	printf("========================================================");
	return 0;
}
