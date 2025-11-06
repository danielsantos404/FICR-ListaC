#include <stdio.h>
#include <locale.h>

int main()
{
	double massa_inicial, massa_atual;
	int tempo = 0; 
	const double LIMITE = 0.5;

	setlocale(LC_ALL, "Portuguese");
	printf("========== CÁLCULO DE DECAIMENTO DO BALACOBACO ==========\n");
	printf("Informe o valor inicial do material (em gramas): ");
	scanf("%lf", &massa_inicial);
	massa_atual = massa_inicial;
	
	while (massa_atual >= LIMITE) {
		massa_atual = massa_atual / 2.0;
		tempo = tempo + 50;
	}

	printf("\nMassa inicial: %.1lfg\n", massa_inicial);
	printf("Massa final: %lfg\n", massa_atual);
	printf("Tempo de decaimento: %is\n", tempo);
	printf("========================================================\n");

	return 0;
}