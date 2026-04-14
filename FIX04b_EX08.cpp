#include <stdio.h>
#include <locale.h>

int main(){
	/*Construa um programa em Linguagem C que, dado um conjunto de
	valores inteiros e positivos (recebidos do usuário), determine
	qual o menor valor do conjunto. O final do conjunto de valores
	é conhecido através do valor zero, que não deve ser considerado.*/
	
    int valor, menor;
    int primeiro = 1;

    do {
        printf("Digite um valor inteiro positivo: ");
        scanf("%d", &valor);

        if (valor > 0) {
            if (primeiro) {
                menor = valor;
                primeiro = 0;
            } else if (valor < menor) {
                menor = valor;
            }
        } 
        else if (valor < 0) {
            printf("Valor invalido. Digite apenas inteiros positivos.\n");
        }

    } while (valor != 0);

    if (primeiro == 0) {
        printf("O menor valor fornecido foi: %d\n", menor);
    } else {
        printf("Nenhum valor positivo foi informado.\n");
    }
}