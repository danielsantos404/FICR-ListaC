#include <stdio.h>
#include <locale.h>

int main()
{
	int n, produto;
	
	setlocale(LC_ALL, "Portuguese");
	printf("========= TABUADA DO 7 DO BALACOBACO =========\n");
	
	for (n = 0; n <= 10; n++) {
		produto = n * 7;
		printf("                 7 X %i = %i\n", n, produto);
	}

	printf("==============================================");
	
	return 0;
}
