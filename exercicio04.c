#include <stdio.h>
#include <limits.h>

void segundo_maior(int *vetor, int iteracoes) {
    int maior = vetor[0];
    int box;
    int segundo = vetor[0];

    for (int i = 0; i < iteracoes; i++) {
        if (maior < vetor[i]) {
            box = maior;
            maior = vetor[i];
            vetor[i] = box;
        }
    }

    for (int i = 0; i < iteracoes; i++) {
        if (vetor[i] == maior) {
            vetor[i] == INT_MIN;
        }
    }

    for (int i = 0; i < iteracoes; i++) {
        if (segundo < vetor[i]) {
            box = segundo;
            segundo = vetor[i];
            vetor[i] = box;
        }
    }

    printf("O segundo maior número é %d\n", segundo);
}

int main() {
    int vetor[100];
    int iteracoes;

    printf("Digite quantos números vai ter sua lista(Max: 100 números):\n");
    scanf("%d", &iteracoes);

    printf("Digite a lista de números para o exercício:\n");
    for (int i = 0; i < iteracoes; i++) {
        printf("Digite o %d número:\n", i + 1);
        scanf(" %d", &vetor[i]);
    }

    segundo_maior(vetor, iteracoes);

    return 0;
}