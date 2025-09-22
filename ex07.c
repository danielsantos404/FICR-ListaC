#include <stdio.h>
#include <locale.h>
#include <math.h>

float raio, altura, quaRaio, volume, area;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("========= CALCULADORA DE ÁREA E VOLUME DE CILINDROS DO BALACOBACO =========\n");
	printf("Informe o raio do cilindro (use virgula para valor decimal): ");
	scanf("%f", &raio);
	printf("Informe a altura do cilindro (use virgula para valor decimal): ");
	scanf("%f", &altura);
	quaRaio = pow(raio, 2);
	volume = 3.14159 * quaRaio * altura;
	area = 2 * 3.14159 * raio * (altura + raio);
	printf("=======================================================================================================\n");
	printf("Um cilindro com %.2f de raio e %.2f de altura tem uma área de %.2f e um volume de %.2f.\n", raio, altura, area, volume);
	printf("=======================================================================================================");
	return 0;
}
