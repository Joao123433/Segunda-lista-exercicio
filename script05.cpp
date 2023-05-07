#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	char nome[5][30], nomeMaiorValor[30];
	int i, vendas[5], comissao, quantAcimaMedia = 0, maiorComissao;
	float quant, totalBruto, media;
	for(i = 0; i < 5; i++) {
		printf("Insira o nome dos vendedores: ");
		gets(nome[i]);
	}
	
	printf("\n\n");
	
	for(i = 0; i < 5; i++) {
		printf("Total de vendas do vendedor %s: R$", nome[i]);
		scanf("%d", &vendas[i]);
		
		quant++;
		totalBruto += vendas[i];
	}
	
	media = totalBruto / quant;
	
	for(i = 0; i < 5; i++) {
		comissao = vendas[i] * 0.10;
		printf("\nVendedor: %s; valor total a ser recebido com o adicional da comissao %d", nome[i], vendas[i] + comissao);
		
		if(vendas[i] > media) {
			quantAcimaMedia++;
		}
		
		if(comissao > maiorComissao) {
			maiorComissao = comissao;
			memcpy(nomeMaiorValor, nome[i], sizeof(nome[i]));
		}
	}
	
	printf("\n\n");
	
	printf("\nO total bruto vendido pelo 5 vendedores: R$%2.f", totalBruto);
	printf("\nA media do total de vendas: R$%.2f", media);
	printf("\nA quantidade de vendedores que venderam acima da media: %d", quantAcimaMedia);
	printf("\nO maior valor de comissao: R$%d e nome do vendedor: %s", maiorComissao, nomeMaiorValor);
	return 0;
}
