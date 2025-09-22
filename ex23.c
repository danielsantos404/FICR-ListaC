#include <stdio.h>
#include <locale.h>
#include <math.h>

double a, b, c, D, x1, x2;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("========== CALCULADORA DE BHASKARA DO BALACOBACO ==========\n");
	printf("IMPORTANTE: Use VÍRGULA como separador decimal (ex: 2,5)\n");
	printf("Digite o valor do coeficiente a: ");
	scanf("%lf", &a);
	printf("Digite o valor do coeficiente b: ");
	scanf("%lf", &b);
	printf("Digite o valor do coeficiente c: ");
	scanf("%lf", &c);
	
	printf("===========================================================\n");
	if (a == 0)
	{
		printf("ERRO: Não é uma equação do segundo grau (o valor de 'a' não pode ser zero).\n");
	}
	else
	{
		D = (b * b) - 4 * a * c;

		printf("O valor do discriminante (D) é: %.2lf\n", D);
		printf("===========================================================\n");

		if (D < 0)
		{
			printf("RESULTADO: A equação não possui raízes reais.\n");
		}
		else if (D == 0)
		{
			x1 = -b / (2 * a);
			printf("RESULTADO: A equação possui uma única raiz real:\nx = %.2lf\n", x1);
		}
		else
		{
			x1 = (-b + sqrt(D)) / (2 * a);
			x2 = (-b - sqrt(D)) / (2 * a);
			printf("RESULTADO: A equação possui duas raízes reais e distintas:\n");
			printf("x1 = %.2lf\n", x1);
			printf("x2 = %.2lf\n", x2);
		}
	}
	printf("===========================================================\n");
	return 0;
}