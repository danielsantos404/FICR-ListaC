#include <stdio.h>
#include <locale.h>

int saque, n200, n100, n50, n20, n10, n5, n2;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("========= CAIXA ELETRÔNICO DO BALACOBACO =========\n");
	printf("Informe quanto você deseja sacar: R$");
	scanf("%i", &saque);
	while (saque >= 200) {
		saque -= 200;
		n200++;
	}
	while (saque >= 100) {
		saque -= 100;
		n100++;
	}
	while (saque >= 50) {
		saque -= 50;
		n50++;
	}
	while (saque >= 20) {
		saque -= 20;
		n20++;
	}
	while (saque >= 10) {
		saque -= 10;
		n10++;
	}
	while (saque >= 5) {
		saque -= 5;
		n5++;
	}
	while (saque >= 2) {
		saque -= 2;
		n2++;
	}
	printf("====================\n");
	printf("VOCÊ SACOU:\n");
	printf("Notas de R$200: %i\n", n200);
    printf("Notas de R$100: %i\n", n100);
    printf("Notas de R$50:  %i\n", n50);
    printf("Notas de R$20:  %i\n", n20);
    printf("Notas de R$10:  %i\n", n10);
    printf("Notas de R$5:   %i\n", n5);
    printf("Notas de R$2:   %i\n", n2);
    printf("VOLTE SEMPRE!\n");
   	printf("====================");
	return 0;
}
