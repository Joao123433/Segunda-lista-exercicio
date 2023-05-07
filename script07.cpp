#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	int i, j, num[10], primo, somaPrimos = 0, quantImparMaior10 = 0;
	float quant, soma;
	
	for(i = 0; i < 10; i++) {
		printf("Insira os valores: ");
		scanf("%d", &num[i]);
	}
	
	for(i = 0; i < 10; i++) {			
		primo = 0;
		for(j = 1; j <= num[i]; j++) {
			if(num[i] % j == 0) {
				primo++;
			}
		}
		if(primo == 2) {
			somaPrimos += num[i];
		}
		
		if(num[i] % 3 == 0) {
			quant++;
			soma += num[i];
		}
		
		if(num[i] % 2 == 1 && num[i] > 10) {
			quantImparMaior10++;
		}
	}
	
	printf("\nA soma dos números primos: %d", somaPrimos);
	printf("\nA média dos números múltiplos de 3: %.0f", soma / quant);
	printf("\nA quantidade de números ímpares e maiores que 10: %d", quantImparMaior10);
	return 0;
}
