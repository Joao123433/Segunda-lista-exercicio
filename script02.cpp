#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	char cores[10][30], pesquisa[30], pesquisaCor[30];
	int i, e, indiceCor;
	for(i = 0; i < 10; i++) {
		printf("Insira o nome da cor: ");
		gets(cores[i]);
	}
	
	
	while(true) {
		printf("\nInsira a cor que deseja pesquisar se existe ou digite fim para encerrar o programa: ");
		gets(pesquisa);
		
		if(strcmp(pesquisa, "fim") == 0) {
			break;
		}
		
		e = 0;
		for(i = 0; i < 10; i++) {
			if(strcmp(pesquisa, cores[i]) == 0) {
				e++;
				indiceCor = i;
				memcpy(pesquisaCor, cores[i], sizeof(cores[i]));
			}
		}
		
		if(e == 1) {
			printf("A cor %s esta no indice %d \n", pesquisaCor, indiceCor);
		} else {
			printf("Essa cor nao existe\n");
		}
	}
	printf("Fim do programa");
	return 0;
}
