#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int cont = 1;
    int idade;
    float peso;
    int qtdMais90 = 0;
    float somaIdades = 0;
    float mediaIdades;
    
    while (cont <= 7) {
        printf("\nPessoa %d\n", cont);
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Digite o peso (kg): ");
        scanf("%f", &peso);

        if (peso > 90) {
            qtdMais90++;
        }
        somaIdades += idade;
        cont++;
    }

    mediaIdades = somaIdades / 7;

    printf("Quantidade de pessoas com mais de 90 kg: %d\n", qtdMais90);
    printf("Media das idades: %.2f anos\n", mediaIdades);
}