#include <stdio.h>

int main() {
	float notas[30], mediaValidas;
	float soma = 0;
	int invalidas = 0;
	int acima = 0;
	int validas = 0;
	
	float media = 7.0;
	
	for (int i=0; i<30; i++) {
		printf("Digite uma nota: \n");
		scanf("%f", &notas[i]);
	}
	
	for (int i=0; i<30; i++) {
		if (notas[i] < 0 || notas[i] > 10) {
			invalidas++;
		} else {
			soma = soma + notas[i];
			validas++;
			
			if (notas[i] > 7.0) {
				acima++;
			}
		}
		
	}
	
	mediaValidas = soma / validas;
	
	printf("Numero de invalidas: %d \n", invalidas);
	printf("Media das validas: %f \n", mediaValidas);
	printf("Acima da media: %d \n", acima);
}