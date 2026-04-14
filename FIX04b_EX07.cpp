#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	/*Faça um programa em Linguagem C para calcular
	a média de notas obtida por um grupo de 8 alunos.*/
		
	float media, notas, soma = 0.0;
	int cont = 0;
	int alunos = 8;
	
	do{
		printf("\nDigite as notas: \n");
		scanf("%f", &notas);
		soma += notas;
		cont++;
	}while(cont <= alunos);
	
	media = soma / alunos;
	
	printf("\nA media: %.1f \n", media);
}