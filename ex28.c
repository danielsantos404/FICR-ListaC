#include <stdio.h>
#include <locale.h>

int main()
{
	int n, soma = 0;
	
	setlocale(LC_ALL, "Portuguese");
	printf("========= SOMA DOS PRIMEIROS 100 DO BALACOBACO =========\n");
	
	for (n = 0; n <= 100; n++) {
		soma = soma + n;
	}
	
	printf("\nA soma de todos primeiros 100 números inteiros é <%i> \n", soma);

	printf("\n========================================================");
	
	return 0;
}
