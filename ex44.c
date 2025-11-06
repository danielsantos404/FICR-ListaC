#include <stdio.h>
#include <locale.h>

int main()
{
	double media;
    double valor_atual = 0, valor_informado = 0, cont = 0;

	setlocale(LC_ALL, "Portuguese");
	printf("============================== MÉDIA DO BALACOBACO ==============================\n");
	
	while (valor_informado >= 0) {
		printf("Informe um valor inteiro positivo (digite negativo para encerrar o calculo): ");
	   	scanf("%lf", &valor_informado);
	   	
	   	if (valor_informado >= 0) {
			valor_atual = valor_atual + valor_informado;
			cont += 1;	   
		}
		
	}
	
	media = valor_atual / cont;
	
	printf("\nSoma dos valores informados: %.0lf\n", valor_atual);
	printf("Média dos valores informados: %.1lf\n", media);
	printf("=================================================================================\n");

	return 0;
}