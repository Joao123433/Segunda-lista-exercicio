#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	char nome[5][30], nomeMenorpeso[30], nomesAbaixoMedia[5][30];
	int i;
	float peso[5], menorPeso, quant, soma, media;
	
	for(i = 0; i < 5; i++) {
		printf("Insira o nome das pessoas: ");
		gets(nome[i]);
	}
	
	printf("\n\n");
	
	for(i = 0; i < 5; i++) {
		printf("Insira o peso do(a) %s: ", nome[i]);
		scanf("%f", &peso[i]);
		
		if(i == 0) {
			menorPeso = peso[i];
			memcpy(nomeMenorpeso, nome[i], sizeof(nome[i]));
		} else if(peso[i] < menorPeso) {
			menorPeso = peso[i];
			memcpy(nomeMenorpeso, nome[i], sizeof(nome[i]));
		}
		
		quant++;
		soma += peso[i];
	}
	
	media = soma / quant;
	
	printf("\nO menor peso: %.2f Kg e o nome da pessoa: %s", menorPeso, nomeMenorpeso);
	printf("\nA média dos pesos: %.2f Kg", media);
	printf("\n\nRelatório com o nome e peso das pessoas cujo peso é inferior a média");
	for(i = 0; i < 5; i++) {
		if(peso[i] < media) {
			printf("\nNome: %s; peso: %.2f Kg", nome[i], peso[i]);
		}
	}
	return 0;
}
