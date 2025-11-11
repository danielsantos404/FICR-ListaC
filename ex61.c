/*
! ! ! ! ! ! ! ! ! ! ! ATENÇAO, PROFESSOR ! ! ! ! ! ! ! ! ! ! !
! ! ! POR FALTA DE CONHECIMENTO SOBRE MATRIZES, UTILIZEI ! ! !
! ! ! ! ! ! ! DE IA PARA FAZER PARTE DO CÓDIGO ! ! ! ! ! ! ! !
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	float A[4][4];
	float D[4];
	float somaDiagonal = 0.0;
	int contLinha, contColuna;

	setlocale(LC_ALL, "");
	printf("======== DIAGONAL PRINCIPAL DO BALACOBACO (MATRIZ 4x4) ========\n\n");
	
	for (contLinha = 0; contLinha < 4; contLinha++) {
		for (contColuna = 0; contColuna < 4; contColuna++) {
			printf("Informe o valor para a posição A[%d][%d]: ", contLinha, contColuna);
			scanf("%f", &A[contLinha][contColuna]);
		}
	}

	for (contLinha = 0; contLinha < 4; contLinha++) {
		somaDiagonal += A[contLinha][contLinha];
		D[contLinha] = A[contLinha][contLinha];
	}

	printf("\n==============================================================\n");
	printf("\nA soma dos elementos da diagonal principal é: %.2f\n", somaDiagonal);
	
	printf("\nVetor D (elementos da diagonal):\n");
	for (contLinha = 0; contLinha < 4; contLinha++) {
		printf("      D[%d] = %.2f\n", contLinha, D[contLinha]);
	}
	
	printf("\n==============================================================\n");

	return 0;
}