#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
    char string[50];

    printf("Digite a sua palavra para verificarmos se é um palíndromo:\n");
    fgets(string, sizeof(string), stdin);

    size_t tamanho = strlen(string) - 2;
    // -2 pois no final da string tem o '\0' e '\n'

    for (int i = 0, f = tamanho; i <= f; i++, f--) {
        if(string[i] == string[f]) {
            // Nada
        } else {
            printf("A palavra não é palíndromo.\n");
            exit(0);
        }
    }

    printf("A palavra '%s' é sim um palíndromo.\n", string);
    
    return 0;   
}