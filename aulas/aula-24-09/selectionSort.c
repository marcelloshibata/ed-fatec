#include <stdio.h>

void selectionSort(int* v, int n) {
	int i, min, j, aux;
	for (i=0; i<n-1; i++) { // marca posicao para inserir menor elemento
		min = i; // posicao menor elemento
		for (j=i+1; j<n; j++) { // procura o menor elemento
			if(v[j] < v[min]) { 
				min=j;
			}
		}
		
		if(v[i] != v[min]) { // troca de posicao
			aux = v[i];
			v[i] = v[min];
			v[min] = aux;
		}
	}
}

int main() {
	int v[8] = {4,3,6,7,9,10,5,8};
	
	selectionSort(v, 8);
	
	printf("Vetor ordenado: \n");
	for (int i=0; i<8; i++) {
		printf("%d ", v[i]);
	}
	return 0;
}