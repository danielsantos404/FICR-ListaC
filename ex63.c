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
	float T[4][4];
	int contLinha, contColuna;

	setlocale(LC_ALL, "");
	printf("======== MATRIZ TRANSPOSTA DO BALACOBACO (MATRIZ 4x4) ========\n\n");
	
	for (contLinha = 0; contLinha < 4; contLinha++) {
		for (contColuna = 0; contColuna < 4; contColuna++) {
			printf("Informe o valor para a posição A[%d][%d]: ", contLinha, contColuna);
			scanf("%f", &A[contLinha][contColuna]);
		}
	}

	for (contLinha = 0; contLinha < 4; contLinha++) {
		for (contColuna = 0; contColuna < 4; contColuna++) {
			T[contLinha][contColuna] = A[contColuna][contLinha];
		}
	}

	printf("\n==============================================================\n");
	printf("\nMatriz T (Transposta de A):\n\n");
	
	for (contLinha = 0; contLinha < 4; contLinha++) {
		for (contColuna = 0; contColuna < 4; contColuna++) {
			printf("   %.2f   ", T[contLinha][contColuna]);
		}
		printf("\n");
	}
	
	printf("\n==============================================================\n");
	return 0;
}