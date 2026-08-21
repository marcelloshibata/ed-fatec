#include <stdio.h>

int main() {
	int i=1, divisor=0, j=1;
	
	while(i<=100) { // gera os numeros de 1 a 100
		while(j<=i) { // gera os valores de 1 a i que vao dividir o numero i, pra verificar os divisores
			if(i%j == 0){ // verifica se i eh divisivel por j
				divisor++;
			}
			j++;
		} //primo: divisivel por 1 e o numero
		if(divisor == 2) {
			printf("%d eh primo \n", i);
		}
		divisor=0;
		j=1;
		i++;
	}
}