#include <stdio.h>
#include <locale.h>

int main()
{
	int anterior = 0;
	int proximo = 1, atual = 1;
	int cont;

	setlocale(LC_ALL, "Portuguese");
	printf("================= FIBONACCI DO BALACOBACO =================\n");
	printf("\n 1    ");

	for (cont = 1; cont <= 10; cont++) {
		anterior = atual;
		atual = proximo;
		proximo = anterior + atual;
		printf("%i    ", atual);
	};


	printf("\n\n===========================================================");
	
	return 0;
}