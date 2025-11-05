#include <stdio.h>
#include <locale.h>

int main()
{
	int idade, cont, maiores = 0;
	
	setlocale(LC_ALL, "Portuguese");
	printf("========= IDADES DO BALACOBACO =========\n");
	
	for (cont = 1; cont <= 10; cont++) {
		printf("Informe a idade da %iª pessoa: ", cont);
	   	scanf("%i", &idade);
	   	
	   	if (idade >= 18) {
   			maiores++;
		}
	}
	
	printf("Foi informada a idade de %i pessoas maiores de idade.", maiores);
	printf("\n========================================================");
	
	return 0;
}
