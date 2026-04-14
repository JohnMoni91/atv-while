#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	 /*Faça um programa em Linguagem C que receba um número do usuário e
	 apresente a fase "Seja bem vindo", tantas vezes quanto for esse número.
	 Um frase por linha.*/
	 
	 int num, cont = 0;
	 
	 printf("\nDigite quantas vezes a frase sera repetida: \n");
	 scanf("%i", &num);
	 
	 while(cont < num){
	 	printf("\nSeja bem vindo\n");
		cont++;
	 }
}