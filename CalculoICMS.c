#include <stdio.h>
#define ICMS 0.18; //declaração de constante como diretiva

int main(void) {
	float preco_produto, valor_icms, valor_total;
	const float frete = 11.50; // const tipo nome = valor
	
	printf("Informe o valor do produto: ");
	scanf("%f", &preco_produto);
	
	valor_icms = preco_produto * ICMS;
	
	printf("\nValor de imposto a ser pago: R$ %.2f \n", valor_icms);
	
	valor_total = preco_produto + valor_icms + frete;
	
	printf("\nValor total a pagar: R$ %.2f\n", valor_total);
	
	return 0;
}
