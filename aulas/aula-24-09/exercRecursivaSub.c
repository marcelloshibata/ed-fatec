#include <stdio.h>

int div(int a, int b) {
	if (a < b) {
		return a;
	}
	return div(a-b, b);	
	
}

int main() {
	int a = 20;
	int b = 6;
	
	int resultado = div(a,b);
	printf("%d", resultado);
	
	return 0;
}