#include <stdio.h>
#include <locale.h>

int main(){
	int cont = 1;
	
	do
	{
		if(cont % 3 == 0){
			printf("\n%i\n", cont);
		}
		cont++;	
	}while(cont <= 100);
}