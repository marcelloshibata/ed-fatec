#include <stdio.h>

int main() {
	int vet1[5], vet2[5];
	int soma, diff, mult;
	float div;
	
	for (int i=0; i<5; i++) {
		printf("Digite um valor que vai pro vet 1: \n");
		scanf("%d", &vet1[i]);
	}
	
	for (int i=0; i<5; i++) {
		printf("Digite um valor que vai pro vet 2: \n");
		scanf("%d", &vet2[i]);
	}
	
	for (int i=0; i<5; i++) {
		soma = vet1[i] + vet2[i];
		printf("Soma dos elementos na posicao %d e: %d\n", i, soma);
		
		diff = vet1[i] - vet2[i];
		printf("Diferenca dos elementos na posicao %d e: %d \n", i, diff);
		
		mult = vet1[i] * vet2[i];
		printf("Produto dos elementos na posicao %d e: %d \n", i, mult);
		
		if (vet1[i] == 0 || vet2[i] == 0) {
			printf("Divisao impossivel \n");
		} else {
			div = vet1[i] / vet2[i];
			printf("Div dos elementos na posicao %d e: %f\n", i, div);
		}
		
		printf("\n");
		
	}
	
}