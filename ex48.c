#include <stdio.h>
#include <locale.h>

int main()
{
	float PE, TP = 0.0, soma = 0.0;
	int CP = 0, cont = 1;
	//PE = Preço do etiqueta
	//TP = Total a pagar
	//CP = Condição de pagamento

	setlocale(LC_ALL, "");
	printf("============================== CAIXA DO BALACOBACO ==============================\n");
	printf("\nInforme o valor do 1° produto (use vírgula para centavos): ");
	scanf("%f", &PE);
 
	while (PE != 0) {
		soma += PE;
		cont++;
	   	printf("Informe o valor do %i° produto (use vírgula para centavos): ", cont);
		scanf("%f", &PE);			
	}
	
	if (soma > 0) {
		printf("\n=================================================================================\n");
		printf("\nEscolha um método de pagamento: \n[1] - Dinheiro (10%% de desconto)\n[2] - Cartão à vista (5%% de desconto)\n[3] - 2x no cartão (preço normal)\n[4] - 3x no cartão (10%% de acréscimo)\n");
		printf("Sua opção: ");
		scanf("%i", &CP);
		
		switch(CP) {
			case 1:
				TP = soma * 0.90;
				break;
			case 2:
				TP = soma * 0.95;
				break;
			case 3:
				TP = soma;
				break;
			case 4:
				TP = soma * 1.10;
				break;
			default:
				printf("ERRO: Escolha um método de pagamento válido!");
				TP = soma;
		}
		
		printf("\n=================================================================================\n");
		printf("\nVALOR FINAL A PAGAR: R$%.2f\n", TP);
		
		if (CP == 3) {
			printf("Em 2x de R$%.2f\n", TP / 2.0);
		} else if (CP == 4) {
			printf("Em 3x de R$%.2f\n", TP / 3.0);
		}
		
	} else {
		printf("Nenhum produto foi registrado.\n");
	}
	
	printf("\n=================================================================================\n");
		
	return 0;
}
