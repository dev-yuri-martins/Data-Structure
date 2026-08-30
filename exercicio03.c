#include <stdio.h>
#include <ctype.h>

void tudo_minusculo(char *str) {
    for(int x = 0; str[x] != '\0'; x++) {
        str[x] = tolower((unsigned char)str[x]);
    }
}

void contar_vogais(char *str) {
    int a = 0; 
    int e = 0; 
    int i = 0;
    int o = 0;
    int u = 0;

    for(int x = 0; str[x] != '\0'; x++) {

    switch (str[x]) {
        case 'a':
            a ++;
            break;

        case 'e':
            e ++; 
            break;

        case 'i':
            i ++; 
            break;
            
        case 'o':
            o ++; 
            break;

        case 'u':
            u ++; 
            break;

        default:
            break;
        }
    }

    printf("Ocorrencias de 'a': %d\n", a);
    printf("Ocorrencias de 'e': %d\n", e);
    printf("Ocorrencias de 'i': %d\n", i);
    printf("Ocorrencias de 'o': %d\n", o);
    printf("Ocorrencias de 'u': %d\n", u);
}

int main() {
    char texto[300];

    printf("Digite o seu texto para contarmos as vogais:\n");
    fgets(texto, sizeof(texto), stdin);

    tudo_minusculo(texto);

    contar_vogais(texto);

    return 0;
}