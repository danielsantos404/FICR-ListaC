#include <stdio.h>
#include <locale.h>

int main()
{
	int n;
	
	setlocale(LC_ALL, "Portuguese");
	printf("=================== NÚMEROS PARES DO BALACOBACO ===================\n");
	
	for (n = 14; n <= 30; n+=2) {
		printf("%i      ", n);
	}

	printf("\n===================================================================");
	
	return 0;
}
