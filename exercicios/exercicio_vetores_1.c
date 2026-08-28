#include <stdio.h>

int main() {
	float media, notas[4], soma;
	int i;
	
	for(i=0; i<4; i++) {
		printf("Digite a nota: ");
		scanf("%f",&notas[i]);
	}
	
	for(i=0; i<4; i++) {
		soma = soma + notas[i];
	}
	
	media = soma / 4;
	printf("Media: %f", media);
}