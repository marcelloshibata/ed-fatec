#include <stdio.h>

int main() {
	int vetA[15], maior, index;
	
	for (int i=0; i<15; i++) {
		printf("Digite os numeros do vetor: \n");
		scanf("%d", &vetA[i]);
	}
	
	maior = vetA[0];
	
	for (int i=0; i<15; i++) {
		if (vetA[i] > maior) {
			maior = vetA[i];
			index = i;
		}
	}
	
	printf("O maior numero e %d e esta na posicao %d", maior, index);
}