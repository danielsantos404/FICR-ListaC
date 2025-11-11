/*
! ! ! ! ! ! ! ! ! ! ! ATENÇAO, PROFESSOR ! ! ! ! ! ! ! ! ! ! !
! ! ! POR FALTA DE CONHECIMENTO SOBRE MATRIZES, UTILIZEI ! ! !
! ! ! ! ! ! ! DE IA PARA FAZER PARTE DO CÓDIGO ! ! ! ! ! ! ! !
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	float B[4][4];
	float somaLinhaAtual, maiorSoma;
	int contLinha, contColuna, linhaMaiorSoma;

	setlocale(LC_ALL, "");
	printf("======== MAIOR SOMA DE LINHA DO BALACOBACO (MATRIZ 4x4) ========\n\n");
	
	for (contLinha = 0; contLinha < 4; contLinha++) {
		for (contColuna = 0; contColuna < 4; contColuna++) {
			printf("Informe o valor para a posição B[%d][%d]: ", contLinha, contColuna);
			scanf("%f", &B[contLinha][contColuna]);
		}
	}

	for (contLinha = 0; contLinha < 4; contLinha++) {
		somaLinhaAtual = 0.0;
		
		for (contColuna = 0; contColuna < 4; contColuna++) {
			somaLinhaAtual += B[contLinha][contColuna];
		}
		
		if (contLinha == 0) {
			maiorSoma = somaLinhaAtual;
			linhaMaiorSoma = contLinha;
		} else if (somaLinhaAtual > maiorSoma) {
			maiorSoma = somaLinhaAtual;
			linhaMaiorSoma = contLinha;
		}
	}

	printf("\n================================================================\n");
	printf("\nA linha que possui a maior soma é a Linha %d.\n", linhaMaiorSoma);
	printf("O valor da soma foi: %.2f\n", maiorSoma);
	printf("\n================================================================\n");

	return 0;
}