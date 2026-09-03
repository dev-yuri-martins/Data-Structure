#include <stdio.h>
#include <string.h>

void inverter_frase(char *frase) {
    char *palavras[100];
    int total = 0;

    // remove o \n que está colado na última palavra, sem ele na hora de 
    // imprimir vai ter uma quebra de linha.
    size_t tam = strlen(frase);
    if (tam > 0 && frase [tam - 1 ] == '\n') {
        frase[tam - 1] = '\0';
    }

    // separa as palavras com um critério, no caso, o espaço 
    char *token = strtok(frase, (" "));
    while (token != NULL) {
        palavras[total] = token;
        total++;
        token = strtok(NULL, " ");
    }

    for (int i = total - 1; i >=0; i--) {
        printf("%s", palavras[i]);
        if (i != 0) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    char frase[300];

    printf("Digite uma frase parainvertermos a ordem das palavras:\n");
    fgets(frase, sizeof(frase), stdin);

    inverter_frase(frase);

    return 0;
}