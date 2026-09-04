#include <stdio.h>

int main() {
	int vet[5], valor, quant;
	
	for (int i=0; i<5; i++) {
		printf("Digite os numeros do vetor: \n");
		scanf("%d", &vet[i]);
	}
	
	printf("Digite o valor inteiro para verificar quantos tem: ");
	scanf("%d", &valor);
	
	for (int i=0; i<5; i++) {
		if (vet[i] == valor) {
			quant = quant + 1;
		}
	}
	
	printf("Quantidade de repeticoes do numero %d: %d", valor, quant);
}