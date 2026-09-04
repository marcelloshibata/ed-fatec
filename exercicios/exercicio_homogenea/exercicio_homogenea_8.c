#include <stdio.h> 

int main() {
	int X[20], Y[20];
	int produto = 0;
	
	for (int i=0; i<20; i++) {
		printf("Valor pro X: \n");
		scanf("%d", &X[i]);
	}
	
	for (int i=0; i<20; i++) {
		printf("Valor pro Y: \n");
		scanf("%d", &Y[i]);
	}
	
	for (int i=0; i<20; i++) {
		produto = produto + X[i] * Y[i];
	}
	
	printf("O produto escalar e: %d", produto);
}