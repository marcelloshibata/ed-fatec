#include <stdio.h>

int mult(int a, int b) {
	if (a == 1) {
		return b;
	} else if (a == 0) {
		return 0;
	} else {
		return b + mult(a-1, b);
	}
}

int main() {
	int a = 4;
	int b = 3;
	
	int resultado = mult(a,b);
	printf("%d", resultado);
	
	return 0;
}