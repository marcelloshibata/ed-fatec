#include <stdio.h>

int main() {
	int vet1[5], vet2[5], soma, i;
	
	for(i=0; i < 5; i++) {
		printf("Digite o que ira para o vetor 1: ");
		scanf("%d", &vet1[i]);
		
		printf("Digite o que ira para o vetor 2: ");
		scanf("%d", &vet2[i]);
	}
	
	for(i=0; i<5; i++) {
		soma = vet1[i] + vet2[i];
		printf("Soma da posicao %d: %d \n", i, soma);
	}
	
}