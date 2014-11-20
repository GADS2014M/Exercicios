#include <stdio.h>

main () {
    char nome_c[30], nome[15], sobre[25];
    int i, j;

    printf("Entre com um nome e sobrenome: ");
    scanf("%s", nome);
    gets(nome_c);

    i = j = 0;

    while (nome_c[i] != ' ') {
        i++;
    }

    while (nome_c[i + 1] != '\0') {
        sobre[j] = nome_c[i + 1];
        i++;
        j++;
    }

    sobre[j] = '\0';

    printf("\n%s, %s", sobre, nome);
}
