#include <stdio.h>

int main () {
	int vet[15];
	int quantPar = 0;
	int quantImpar = 0;
	int vetP[15], vetI[15];
	
	for (int i=0; i<15; i++) {
		printf("Digite os numeros do vetor: \n");
		scanf("%d", &vet[i]);
	}
	
	for (int i=0; i<15; i++) {
		if (vet[i] % 2 == 0) {
			vetP[quantPar] = vet[i];
			quantPar++;
		} else {
			vetI[quantImpar] = vet[i];
			quantImpar++;
		}
	}
	
	printf("Valores pares: \n");
	for (int i=0; i<quantPar; i++) {
		printf("%d \n", vetP[i]);
	}
	
	printf("Valores impares: \n");
	for (int i=0; i<quantImpar; i++) {
		printf("%d \n", vetI[i]);
	}
}