/*
! ! ! ! ! ! ! ! ! ! ! ATENÇAO, PROFESSOR ! ! ! ! ! ! ! ! ! ! !
! ! ! POR FALTA DE CONHECIMENTO SOBRE MATRIZES, UTILIZEI ! ! !
! ! ! ! ! ! ! DE IA PARA FAZER PARTE DO CÓDIGO ! ! ! ! ! ! ! !
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	float R[4][5];
	float maiorValor;
	int posLinha;
	int posColuna;
	int contLinha, contColuna;

	setlocale(LC_ALL, "");
	printf("======== MAIOR VALOR DA MATRIZ (4x5) DO BALACOBACO ========\n\n");
	
	for (contLinha = 0; contLinha < 4; contLinha++) {
		for (contColuna = 0; contColuna < 5; contColuna++) {
			printf("Informe o valor para a posição R[%d][%d]: ", contLinha, contColuna);
			scanf("%f", &R[contLinha][contColuna]);
		}
	}

	maiorValor = R[0][0];
	posLinha = 0;
	posColuna = 0;

	for (contLinha = 0; contLinha < 4; contLinha++) {
		for (contColuna = 0; contColuna < 5; contColuna++) {
			
			if (R[contLinha][contColuna] > maiorValor) {
				
				maiorValor = R[contLinha][contColuna];
				posLinha = contLinha;
				posColuna = contColuna;
			}
		}
	}

	printf("\n===========================================================\n");
	printf("\nO maior elemento da matriz é: %.2f\n", maiorValor);
	printf("Ele foi encontrado na posição: Linha %d, Coluna %d\n", posLinha, posColuna);
	printf("\n===========================================================\n");

	return 0;
}