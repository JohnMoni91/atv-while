#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int cont = 1;
    int num;

    while(cont <= 5){
        printf("Digite o %i numero: ", cont);
        scanf("%i", &num);

        if(num % 3 == 0){
            printf("%i é multiplo de 3\n", num);
        } else {
            printf("%i não é multiplo de 3\n", num);
        }

        cont++;
    }
}