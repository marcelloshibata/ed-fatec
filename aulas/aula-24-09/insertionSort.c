#include <stdio.h>

void insertionSort(int* v, int n) {
	int j, aux;
	int i = 0;
	for(j=1; j<n; j++) { // percorre o vetor
		aux = v[j];
		i = j-1;
		
		// i >= 0
		// no maximo chega na primeira posicao
		// v[i]>aux: compara os elementos
		// determina o local correto para inserir
		while((i >= 0) && (v[i] > aux)) {
			// desloca elementos para direita
			// precisa abrir espaco
			// para inserir o elemento
			// no local correto
			v[i+1] = v[i];
			// desloca para a esquerda o
			// contador ate achar a posicao
			// correta
			i--;
		}
		// insere auxiliar na posicao vazia
		v[i+1] = aux;
	}
}

int main() {
	int v[8] = {4,3,6,7,9,10,5,8};
	
	insertionSort(v, 8);
	
	printf("Vetor ordenado: \n");
	for (int i=0; i<8; i++) {
		printf("%d ", v[i]);
	}
	return 0;
}