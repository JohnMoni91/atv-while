#include <stdio.h>
#include <locale.h>
#include <string.h> //Quando mexer com string, lembre-se disso

//imprimir o meu nome 5 vezes na tela

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50];
	int rep;
	int cont = 1;
	
	printf("\nDigite seu nome: \n");
	fgets(nome, sizeof(nome), stdin); //leia a linha do nome e o tamanho do nome
	nome[strcspn(nome, "\n")] = 0; // a string nome deve substituir o enter por vazio
	
	printf("\nQuantas vezes você quer imprimir?\n");
	scanf("%i", &rep);
	getchar();
	
	while(cont <= rep) //enquanto a variavel não for maior que 5, ele ainda continua no loop
	{	
		//Adicionar verificação de par. Mostrar somente resultado par
			if(cont % 2 == 0){
				printf("\n%2d, %s\n", cont , nome);
			}	
		cont++;
	}
}