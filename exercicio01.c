#include <stdio.h>

void somar (int *vetor, int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    printf("A soma de todos elementos é: %d.\n", soma);
}

int main () {
    int array[100] = {0};
    int iteracoes; 

    printf("Quantos números tem sua lista?\n");
    scanf(" %d", &iteracoes);

    for (int i = 0; i < iteracoes; i++) {
        printf("Digite o número %d da lista:\n", i + 1);
        scanf(" %d", &array[i]);
    }

    somar(array, iteracoes);

    return 0;
}