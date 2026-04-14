#include <stdio.h>
#include <locale.h>

int main(){
	int cont = 10;
	
	do{
		printf("\n%i\n", cont);
		cont--;
	}while (cont > 0);
}