#include <stdio.h>
#include <locale.h>

int main()
{
	int numero;
	int soma = 0, cont = 0;
	int media;
	
	setlocale(LC_ALL, "Portuguese");
	printf("====== MÉDIA DOS PARES ENTRE 13 E 73 DO BALACOBACO ======\n");
	
	for (numero = 13; numero <= 73; numero++) {
	   	
	   	if (numero % 2 == 0) {
   			soma = soma + numero;
   			cont++;
		}
	}
	
	media = soma / cont;
	
	printf("\nA média aritmética dos pares entre 13 e 73 é igual a <%i>\n", media);
	printf("\n=========================================================");
	
	return 0;
}
