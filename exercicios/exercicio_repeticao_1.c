#include <stdio.h>

int main() {
	int sum = 0;
	int i;
	
	for(i=1; i<=500; i++) {
		if (i % 2 != 0 && i % 3 == 0) {
			sum += i;
		}
	}
	
	printf("%d", sum);
}