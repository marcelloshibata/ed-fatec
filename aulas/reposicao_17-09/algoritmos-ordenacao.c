#include <stdio.h>

void bubbleSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - 1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

void insertionSort(int vetor[], int tamanho) {
	for (int i=1; i<tamanho; i++) {
		int chave = vetor[i];
		int j = i-1;
		
		while (j >= 0 && vetor[j] > chave) {
			vetor[j + 1] = vetor[j];
			j--;
		}
		
		vetor[j + 1] = chave;
	}
}

void selectionSort(int vetor[], int tamanho) {
	for (int i=0; i<tamanho-1; i++) {
		int menor = i;
		for (int j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[menor]) {
                menor = j;
            }
        }

        if (menor != i) {
            int aux = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = aux;
        }	
	}
}

void mergeSort(int vetor[], int inicio, int fim) {
	
	// Prof não consegui fazer o mergeSort e o QuickSort :( Vou esperar pela sua aula pra entender melhor
}

int main() {
	int temperaturas[8] = {32, 25, 28, 21, 30, 26, 24, 35};
	
	bubbleSort(temperaturas, 8);
	for (int i=0; i<8; i++) {
		printf("%d ", temperaturas[i]);
	}
	
	printf("\n");
	int notas[8] = {7, 4, 9, 6, 8, 5, 10, 3};
	
	insertionSort(notas, 8);
	for (int i=0; i<8; i++) {
		printf("%d ", notas[i]);
	}
	
	printf("\n");
	int tempos[8] = {12, 9, 15, 11, 10, 14, 8, 13};
	
	selectionSort(tempos, 8);
	for (int i=0; i<8; i++) {
		printf("%d ", tempos[i]);
	}
	
	printf("\n");
	int vendas[8] = {450, 120, 890, 320, 75, 640, 210, 530};
}


		
		