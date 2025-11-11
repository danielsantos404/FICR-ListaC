#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main()
{
	char sexo, resposta;
	int i;
	
	int cont_sim = 0;
	int cont_nao = 0;
	
	int total_homens = 0;
	int total_mulheres = 0;
	
	int cont_mulheres_sim = 0;
	int cont_homens_nao = 0;
	
	float perc_mulheres_sim = 0.0;
	float perc_homens_nao = 0.0;

	setlocale(LC_ALL, "");
	printf("================== PESQUISA DE MERCADO DO BALACOBACO ==================\n");

	for (i = 1; i <= 20; i++) {
		
		printf("\n--- Entrevistado %d ---\n", i);
		
		printf("Informe o sexo (M ou F): ");
		scanf(" %c", &sexo);
		sexo = toupper(sexo);

		printf("Gostou do produto (S ou N): ");
		scanf(" %c", &resposta);
		resposta = toupper(resposta);
		
		if (resposta == 'S') {
			cont_sim++;
		} else if (resposta == 'N') {
			cont_nao++;
		}

		if (sexo == 'M') {
			total_homens++;
			if (resposta == 'N') {
				cont_homens_nao++;
			}
		} else if (sexo == 'F') {
			total_mulheres++;
			if (resposta == 'S') {
				cont_mulheres_sim++;
			}
		}
	}

	if (total_mulheres > 0) {
		perc_mulheres_sim = ((float)cont_mulheres_sim / total_mulheres) * 100.0;
	}
	
	if (total_homens > 0) {
		perc_homens_nao = ((float)cont_homens_nao / total_homens) * 100.0;
	}

	printf("\n=============================== RESULTADO DA PESQUISA ===============================\n");
	printf("Número de pessoas que responderam SIM: %d\n", cont_sim);
	printf("Número de pessoas que responderam NÃO: %d\n", cont_nao);
	
	if (total_mulheres > 0) {
		printf("Porcentagem de mulheres que responderam SIM: %.2f%%\n", perc_mulheres_sim);
	} else {
		printf("Nenhuma mulher foi entrevistada.\n");
	}

	if (total_homens > 0) {
		printf("Porcentagem de homens que responderam NÃO: %.2f%%\n", perc_homens_nao);
	} else {
		printf("Nenhum homem foi entrevistado.\n");
	}
	
	printf("=================================================================================\n");

	return 0;
}