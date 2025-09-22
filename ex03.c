#include <stdio.h>
#include <locale.h>

int x, y, quo, res;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("============== CALCULADORA DE QUOCIENTE E RESTO DO BALACOBACO ==============\n");
	printf("Informe o dividendo: ");
	scanf("%i", &x);
	printf("Informe o divisor: ");
	scanf("%i", &y);
	quo = x / y;
	res = x % y;
	printf("=========================\n");
	printf("%i ÷ %i = %i \nResto = %i\n", x, y, quo, res);
	printf("=========================");
	return 0;
}
