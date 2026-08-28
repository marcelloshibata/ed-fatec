#include <stdio.h>

int main() {
	float media, n1, n2, n3, n4, n5;
	
	printf("Informe a nota 1:");
	scanf("%f", &n1);
	
	printf("Informe a nota 2:");
	scanf("%f", &n2);
	
	printf("Informe a nota 3:");
	scanf("%f", &n3);
	
	printf("Informe a nota 4:");
	scanf("%f", &n4);
	
	printf("Informe a nota 5:");
	scanf("%f", &n5);
	
	media = (n1+n2+n3+n4+n5) / 5;
	
	printf("Media: %f", media);
}