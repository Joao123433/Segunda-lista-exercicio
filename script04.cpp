#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	char nome[5][30], nomeMaiorValor[30];
	int i, valor[5], quantAbaixo10 = 0, quantAcimaMedia, maiorValor;
	float quant, soma, media;
	for(i = 0; i < 5; i++) {
		printf("Insira o nome dos produtos: ");
		gets(nome[i]);
	}
	
	printf("\n\n");
	
	for(i = 0; i < 5; i++) {
		printf("Insira o valor do produto %s: R$", nome[i]);
		scanf("%d", &valor[i]);
		
		quant++;
		soma += valor[i];
	}
	
	media = soma / quant;
	
	for(i = 0; i < 5; i++) {
		if(valor[i] < 10) {
			quantAbaixo10++;
		}
		
		if(valor[i] > media) {
			quantAcimaMedia++;
		}
		
		if(valor[i] > maiorValor) {
			maiorValor = valor[i];
			memcpy(nomeMaiorValor, nome[i], sizeof(nome[i]));
		}
	}
	
	printf("\nA quantidade de produtos que o valor é abaixo de 10 reais; %d", quantAbaixo10);
	printf("\nA média dos valores dos produtos; %.2f", media);
	printf("\nA quantidade de produtos que valor acima da média; %d", quantAcimaMedia);
	printf("\nO maior valor e o nome do produto; R$%d %s", maiorValor, nomeMaiorValor);
	for(i = 0; i < 5; i++) {
		printf("\nProduto: %s; Valor: %d", nome[i], valor[i]);
	}
	return 0;
}
