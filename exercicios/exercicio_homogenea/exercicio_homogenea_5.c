#include <stdio.h>

int main() {
	int qtdAlunos = 0;
	
	printf("Digite a quantidade de alunos a ser lido: ");
	scanf("%d", &qtdAlunos);
	
	int vetAlunos[qtdAlunos];
	int G1[qtdAlunos];
	int G2[qtdAlunos];
	int media[qtdAlunos];
	
	for (int i=0; i<qtdAlunos; i++) {
		printf("Informe a nota G1 do aluno %d: \n", i);
		scanf("%d", &G1[i]);
	}
	
	for (int i=0; i<qtdAlunos; i++) {
		printf("Informe a nota G2 do aluno %d: \n", i);
		scanf("%d", &G2[i]);
		
	}
	
	for (int i=0; i<qtdAlunos; i++) {
		media[i] = (G1[i] + G2[i]) / 2;
		printf("Media aritmetica do aluno %d e igual a: %d \n", i, media[i]);
		
	}

}
		
		