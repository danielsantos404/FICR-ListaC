#include <stdio.h>
#include <locale.h>

float salario, vendas, comissao, totSalario;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("========= CALCULADORA DE SALÁRIO TOTAL LOJAS DO BALACOBACO =========\n");
	printf("Informe seu salário fixo mensal (use virgula antes dos centavos): R$");
	scanf("%f", &salario);
	printf("Em dinheiro, informe o total que você vendeu este mês (use virgula antes dos centavos): R$");
	scanf("%f", &vendas);
	comissao = 	(15.0 / 100) * vendas;
	totSalario = salario + comissao;
	printf("============================================================================================================\n");
	printf("Somando seu salário fixo de R$%.2f com a comissão das suas vendas, seu salário total será de R$%.2f.\n", salario, totSalario);
	printf("============================================================================================================");
	return 0;
}
