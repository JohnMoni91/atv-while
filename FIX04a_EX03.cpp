#include <stdio.h>
#include <locale.h>

int main(){
	int cont = 1;
	
	while(cont <= 100)
	{
		if(cont % 3 == 0){
			printf("\n%i\n", cont);
		}
		cont++;	

	}
}