#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	float salario, SomaSalario = 0.0, MediaSalario = 0.0, MediaFilhos = 0.0, MaiorSalario = 0.0, PorcBaixaRenda = 0.0;
	int NumFilhos, SomaFilhos = 0, ContHabitantes = 0, ContBaixaRenda = 0;

	setlocale(LC_ALL, "");
	printf("=================== PREFEITURA DO BALACOBACO ===================\n");

	while (1) {
		printf("\nInforme o salário do %d° cidadão (use 0 para encerrar): ", ContHabitantes + 1);
		scanf("%f", &salario);

		if (salario <= 0) {
			break;
		}

		printf("Informe o n° de filhos do %d° cidadão: ", ContHabitantes + 1);
		scanf("%i", &NumFilhos);
		
		ContHabitantes++;
		SomaSalario += salario;
		SomaFilhos += NumFilhos;

		if (salario > MaiorSalario) {
			MaiorSalario = salario;
		}

		if (salario <= 1000.00) {
			ContBaixaRenda++;
		}
	}
	
	if (ContHabitantes > 0) {
		MediaSalario = SomaSalario / ContHabitantes;
		MediaFilhos = (float)SomaFilhos / ContHabitantes;
		PorcBaixaRenda = ((float)ContBaixaRenda / ContHabitantes) * 100.0;
	}
		
	printf("\n===================== RESULTADO DA PESQUISA ====================\n");
	printf("\nCidadãos pesquisados: %i", ContHabitantes);
	printf("\nMédia do salário da população: R$%.2f", MediaSalario);
	printf("\nMédia do número de filhos: %.1f", MediaFilhos);
	printf("\nMaior salário informado: R$%.2f", MaiorSalario);
	printf("\nPercentual de pessoas com salário até R$1000,00: %.2f%%\n", PorcBaixaRenda);
	printf("\n================================================================\n");
		
	return 0;
}