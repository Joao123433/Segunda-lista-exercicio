#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int vet[10], i, menorIdade, quant2030, quantMaiorMedia;
	float quant, soma, media;
	
	for(i = 0; i < 10; i++) {
		printf("Insira uma idade: ");
		scanf("%d", &vet[i]);
		
		quant++;
		soma += vet[i];
	}
	
	media = soma / quant;
	
	for(i = 0; i < 10; i++) {
		if(i == 0) {
			menorIdade = vet[i];
		} else if(vet[i] < menorIdade) {
			menorIdade = vet[i];
		}
		
		if(vet[i] > 20 && vet[i] < 30) {
			quant2030++;
		}
		
		if(vet[i] > media) {
			quantMaiorMedia++;
		}
	}
	
	printf("\nA menor idade: %d", menorIdade);
	printf("\nA média das idades: %.0f", media);
	printf("\nA quantidade de pessoas que tem idade entre 20 e 30 anos: %d", quant2030);
	printf("\nA quantidade de pessoas com idade maior que a média: %d", quantMaiorMedia);
	return 0;
}
