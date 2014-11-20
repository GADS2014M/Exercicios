#include <stdio.h>

main () {
    char nome_c[30], sobre[15];
    int i = 0, j = 0;

    printf("Entre com um nome e sobrenome: ");
    gets(nome_c);

     while (nome_c[i] != ' ') {
        i++;
    }

    while (nome_c[i + 1] != '\0') {
        sobre[j] = nome_c[i + 1];
        i++;
        j++;
    }

    sobre[j] = '\0';

    printf("\n%s", sobre);
}
