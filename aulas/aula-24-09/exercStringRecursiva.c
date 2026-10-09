#include <stdio.h>

int tamanhoString(char str[], int indice) {
	if (str[indice] == '\0') {
		return 0;
	} else {
		return 1 + tamanhoString(str, indice + 1);
	}
}

int main() {
	char text[] = "marcello";
	
	int resultado = tamanhoString(text, 0);
	printf("Quantidade de caracteres: %d", resultado);
	
	return 0;
}