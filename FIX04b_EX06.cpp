#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int cont = 1;
	int num;
	int resultado;
	
	printf("\nDigite o valor que deseja multiplicar: \n");
	scanf("%i", &num);
	
	do{
		resultado = num * cont;
		printf("\n%i\n", resultado);
		cont++;
	}while(cont <= 10);
}