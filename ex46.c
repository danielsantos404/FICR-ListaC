#include <stdio.h>
#include <locale.h>

int main()
{
	int n;
	long long res = 1;


	setlocale(LC_ALL, "Portuguese");
	printf("================== FATORIAL DO BALACOBACO ==================\n");
	printf("\nInforme um valor inteiro positivo: ");
	scanf("%i", &n);
	int cont = n;
	printf("\n!%i", n);
	
	while (cont <= n && cont > 1) {
		res = res * cont;
		cont -= 1;
		printf(" X %i", cont);
	}
	
	printf(" = %lld", res);
	printf("\n\n============================================================\n");

	return 0;
}
