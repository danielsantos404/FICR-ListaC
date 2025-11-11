#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main()
{
	float altura, maior_altura, menor_altura;
	char sexo;
	
	int cont_homens = 0;
	int cont_mulheres = 0;
	float soma_altura_mulheres = 0.0;
	float media_altura_mulheres = 0.0;
	
	int i;

	setlocale(LC_ALL, "");
	printf("========== PESQUISA DE ALTURA E SEXO DO BALACOBACO ==========\n");

	for (i = 1; i <= 15; i++) {
		
		printf("\n--- Pessoa %d ---\n", i);
		printf("Informe a altura (ex: 1,75): ");
		scanf("%f", &altura);
		
		printf("Informe o sexo (M ou F): ");
		scanf(" %c", &sexo); 
		
		sexo = toupper(sexo);

		if (i == 1) {
			maior_altura = altura;
			menor_altura = altura;
		} else {
			if (altura > maior_altura) {
				maior_altura = altura;
			}
			if (altura < menor_altura) {
				menor_altura = altura;
			}
		}

		if (sexo == 'M') {
			cont_homens++;
		} else if (sexo == 'F') {
			cont_mulheres++;
			soma_altura_mulheres += altura;
		}
	}

	if (cont_mulheres > 0) {
		media_altura_mulheres = soma_altura_mulheres / cont_mulheres;
	}

	printf("\n=================== RESULTADO DA PESQUISA ===================\n");
	printf("Maior altura do grupo: %.2fm\n", maior_altura);
	printf("Menor altura do grupo: %.2fm\n", menor_altura);
	
	if (cont_mulheres > 0) {
		printf("Média de altura das mulheres: %.2fm\n", media_altura_mulheres);
	} else {
		printf("Nenhuma mulher foi registrada.\n");
	}
	
	printf("Número de homens: %d\n", cont_homens);
	printf("=============================================================\n");

	return 0;
}