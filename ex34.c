#include <stdio.h>
#include <locale.h>

int main()
{
	int numero;
	int cont = 1, dentro = 0, fora =0;
	
	setlocale(LC_ALL, "Portuguese");
	printf("====== MÉDIA DOS PARES ENTRE 13 E 73 DO BALACOBACO ======\n");
	
	for (cont = 1; cont <= 10; cont++) {
		printf("Informe o %i° número: ", cont);
	   	scanf("%i", &numero);
	   	
	   	if (numero >= 10 && numero <= 50) {
			dentro++;
		} else {
			fora++;
		}
	}
	
	printf("Foram informados %i números dentro do intervalo e %i fora do intervalo.", dentro, fora);
	printf("\n=========================================================");
	
	return 0;
}
