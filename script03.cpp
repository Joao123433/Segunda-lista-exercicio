#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int vetA[5], vetB[5], vetC[10], i, j, somaPerfeito, quantPerfeito;
	
	for(i = 0; i < 5; i++) {
		printf("Insira os numeros do primeiro vetor: ");
		scanf("%d", &vetA[i]);
	}
	printf("\n\n");
	for(i = 0; i < 5; i++) {
		printf("Insira os numeros do segundo vetor: ");
		scanf("%d", &vetB[i]);
	}
	
	memcpy(vetC, vetA, sizeof(vetA));
	memcpy(vetC + 5, vetB, sizeof(vetB));
	
	for(i = 0; i < 10; i++) {
		somaPerfeito = 0;
		for(j = 1; j < vetC[i]; j++) {
			if(vetC[i] % j == 0) {
				somaPerfeito += j;
			}
		}
		
		if(vetC[i] == somaPerfeito && vetC[i] != 0) {
			quantPerfeito++;
		}
	}
	
	printf("\nA quantidade de números perfeitos: %d", quantPerfeito);
	return 0;
}
