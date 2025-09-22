#include <stdio.h>
#include <locale.h>

int num, ant, suc;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("============== ANTECESSORES E SUCESSORES DO BALACOBACO ==============\n");
	printf("Informe um número: ");
	scanf("%i", &num);
	ant = num - 1;
	suc = num + 1;
	printf("================================================================\n");
	printf("O número informado foi %i, seu antecessor é %i e seu sucessor é %i.\n(%i -> %i -> %i)\n", num, ant, suc, ant, num, suc);
	printf("================================================================");
	return 0;
}
