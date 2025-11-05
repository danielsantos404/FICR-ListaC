/*
OBS: Notei que o e o enunciado da questão apresenta a fórmula para calcular de 
Fahrenheit para Celsius, mas pede para que a resolução seja de Celsius para Fahrenheit.
Decidi fazer conforme a fórmula, pois parecia o correto a se fazer.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	float f, c = 0;
	
	setlocale(LC_ALL, "Portuguese");
	printf("========= FAHRENHEIT PARA CELSIUS DO BALACOBACO =========\n");
	
	for (f = 50; f <= 65; f++) {
		c = (5.0 / 9.0) * (f - 32);
   	
		printf("%.0fºF = %.1fºC\n", f, c);	   	
	}
	
	printf("=======================================================");
	
	return 0;
}
