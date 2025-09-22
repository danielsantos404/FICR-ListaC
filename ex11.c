#include <stdio.h>
#include <locale.h>

/*
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!!!!NOTA: Tenho ciência de que usar 'float' para cálculos monetários repetitivos!!!!!
!!!!pode causar imprecisões. A solução ideal seria converter para centavos e usar!!!!
!!!!inteiros, mas optei pela simplicidade para este exercício.!!!!!!!!!!!!!!!!!!!!!!!
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
*/  

float totCompra, totPago, troco, totTroco;
int n200, n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m5;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("=========================== SUPERMERCADO DO BALACOBACO ===========================\n");
	printf("Informe o valor total da compra do cliente (use virgula para centavos): R$");
	scanf("%f", &totCompra);
	printf("Informe o valor pago pelo cliente (use virgula para centavos): R$");
	scanf("%f", &totPago);
	
	while(totPago < totCompra)
	{
   	printf("ERRO: O valor pago pelo cliente não pode ser menor do que o total da compra!!! (use virgula para centavos): R$");
	scanf("%f", &totPago);		
	}
	
	troco = totPago - totCompra;
	totTroco = troco;
	
	while (troco >= 200) {
		troco -= 200;
		n200++;
	}
	while (troco >= 100) {
		troco -= 100;
		n100++;
	}
	while (troco >= 50) {
		troco -= 50;
		n50++;
	}
	while (troco >= 20) {
		troco -= 20;
		n20++;
	}
	while (troco >= 10) {
		troco -= 10;
		n10++;
	}
	while (troco >= 5) {
		troco -= 5;
		n5++;
	}
	while (troco >= 2) {
		troco -= 2;
		n2++;
	}
	while (troco >= 1) {
		troco -= 1;
		m1++;
	}
	while (troco >= 0.5) {
		troco -= 0.5;
		m50++;
	}
	while (troco >= 0.25) {
		troco -= 0.25;
		m25++;
	}
	while (troco >= 0.10) {
		troco -= 0.10;
		m10++;
	}
	while (troco >= 0.05) {
		troco -= 0.05;
		m5++;
	}
	printf("=============================\n");
	printf("TROCO TOTAL: R$%.2f\n", totTroco);
	printf("VOCÊ DEVE PASSAR O TROCO COM:\n");
	printf("Notas de R$200:____%i\n", n200);
    printf("Notas de R$100:____%i\n", n100);
    printf("Notas de R$50:_____%i\n", n50);
    printf("Notas de R$20:_____%i\n", n20);
    printf("Notas de R$10:_____%i\n", n10);
    printf("Notas de R$5:______%i\n", n5);
    printf("Notas de R$2:______%i\n", n2);
    printf("Moedas de R$1:_____%i\n", m1);
	printf("Moedas de R$0,50:__%i\n", m50);
	printf("Moedas de R$0,25:__%i\n", m25);
	printf("Moedas de R$0,10:__%i\n", m10);
	printf("Moedas de R$0,05:__%i\n", m5);
    printf("BOM TRABALHO!\n");
   	printf("=============================");
	return 0;
}
