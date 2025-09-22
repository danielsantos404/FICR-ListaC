#include <stdio.h>
#include <locale.h>

char classe;
double consumo, VF, VP, ICMS;
int operacaoValida = 0;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("================== NEOENERGIA DO BALACOBACO ==================\n");
	printf("Informe seu consumo em KWh (use VÍRGULA para decimais): ");
	scanf("%lf", &consumo);
	
	do {
		printf("\nInforme sua classe consumidora:\n[A] Residencial\n[B] Comercial\n[C] Industrial\nSua escolha: ");
		scanf(" %c", &classe);
		
		switch(classe)
		{
			case 'a':
			case 'A':
				VF = consumo * 0.5;
				operacaoValida = 1;
				break;
			case 'b':
			case 'B':
				VF = consumo * 0.8;
				operacaoValida = 1;
				break;
			case 'c':
			case 'C':
				VF = consumo * 1.0;
				operacaoValida = 1;
				break;
			default:
				printf("\nERRO: Informe uma classe válida! (A, B ou C).\n");
		}
	} while (operacaoValida == 0);

	ICMS = 0.3 * VF;
	VP = VF + ICMS;

	printf("==============================================================\n");
	printf("                    FATURA DETALHADA\n");
	printf("==============================================================\n");
	printf("Classe Consumidora: %c\n", classe);
	printf("Consumo (KWh): %.2lf\n", consumo);
	printf("Valor do Fornecimento (sem impostos): R$ %.2lf\n", VF);
	printf("Valor do ICMS (30%%): R$ %.2lf\n", ICMS);
	printf("Valor Total a Pagar: R$ %.2lf\n", VP);
	printf("==============================================================");
	return 0;
}
