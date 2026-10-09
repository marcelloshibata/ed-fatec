#include <stdio.h>

int pot(int a, int b) {
	if (b == 1) {
		return a;
	}
	return a * pot(a, b-1);	
	
}

int main() {
	int a = 5;
	int b = 3;
	
	int resultado = pot(a,b);
	printf("%d", resultado);
	
	return 0;
}