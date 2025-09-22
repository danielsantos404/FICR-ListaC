#include <stdio.h>
#include <locale.h>
#include <math.h>

float raio, quaRaio, res;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("============== CALCULADORA DE ÁREA DE CÍRCULOS DO BALACOBACO ==============\n");
	printf("Informe o valor do raio do círculo (use virgula para valor decimal): ");
	scanf("%f", &raio);
	quaRaio = pow(raio, 2);
	res = quaRaio * 3.14159;
	printf("=====================================================\n");
	printf("Um círculo de raio %.2f tem %.2f de área.\n", raio, res);
	printf("=====================================================");
	return 0;
}
