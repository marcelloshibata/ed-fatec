#include <stdio.h>

int main() {
	int vet[20];
	
	for (int i=0; i<20; i++) {
		printf("Digite os numeros do vetor: \n");
		scanf("%d", &vet[i]);
	}
	
	
	for (int i=0; i<20; i++) {
		vet[i] = vet[i] * i;
		printf("Novo valor do vet na pos %d e: %d \n", i, vet[i]);
	}
}