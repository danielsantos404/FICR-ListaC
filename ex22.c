#include <stdio.h>
#include <locale.h>

int main()
{
	int n1, n2, resultado;
	char operacao;
	int operacaoValida = 0;

	setlocale(LC_ALL, "Portuguese");
	printf("========== CALCULADORA DO BALACOBACO ==========\n");
	printf("Informe o primeiro valor inteiro: ");
	scanf("%i", &n1);
	printf("Informe o segundo valor inteiro:  ");
	scanf("%i", &n2);

	do
	{
		printf("\nInforme a operação que deseja realizar:\n");
		printf("[+] Adição\n[-] Subtração\n[/] Divisão\n[X] Multiplicação\nSua escolha: ");
		scanf(" %c", &operacao);
		
		printf("===============================================\n");
		switch(operacao)
		{
			case '+':
				resultado = n1 + n2;
				printf("RESULTADO: %d + %d = %d\n", n1, n2, resultado);
				operacaoValida = 1;
				break;
			
			case '-':
				resultado = n1 - n2;
				printf("RESULTADO: %d - %d = %d\n", n1, n2, resultado);
				operacaoValida = 1;
				break;
			
			case '/':
				if (n1 != 0 && n2 != 0)
				{
					resultado = n1 / n2;
					printf("RESULTADO: %d / %d = %d\n", n1, n2, resultado);
				}
				else
				{
					printf("ERRO: Toda divisão por 0 é igual a 0\n");
				}
				operacaoValida = 1;
				break;

			case 'x':
			case 'X':
				resultado = n1 * n2;
				printf("RESULTADO: %d X %d = %d\n", n1, n2, resultado);
				operacaoValida = 1;
				break;
			
			default:
				printf("ERRO: Operação inválida! Tente novamente.\n");
		}
	} while (operacaoValida == 0);
	printf("===============================================\n");
	return 0;
}
