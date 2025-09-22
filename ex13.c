#include <stdio.h>
#include <locale.h>

float autoPreco, fabriPreco, impostos, revendedor;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("======================= PREÇO DE CARROS DO BALACOBACO =======================\n");
	printf("Informe o preço do carro na fábrica (use virgula para centavos): ");
	scanf("%f", &fabriPreco);
	impostos = 0.45 * fabriPreco;
	revendedor = 0.28 * fabriPreco;
	autoPreco = fabriPreco + impostos + revendedor;
	printf("==========================================================\n");
	printf("O CARRO CUSTARÁ:\n");
	printf("Preço de fábrica: R$%.2f\n", fabriPreco);
	printf("45 porcento de impostos: R$%.2f\n", impostos);
	printf("28 porcento de taxa do revendedor: R$%.2f\n", revendedor);
	printf("PREÇO TOTAL DO CARRO: R$%.2f\n", autoPreco);
   	printf("==========================================================");
	return 0;
}
