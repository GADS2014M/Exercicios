#include <stdio.h>

main () {
    char todo[32], nome[16], sobre[16];
    int i, j;

    printf("Entre com um nome e sobrenome: ");
    gets(todo);

    i = j = 0;

    while (todo[i] != ' ') {
        nome[i] = todo[i];
        i++;
    }

    nome[i] = '\0';

    while (todo[i + 1] != '\0') {
        sobre[j] = todo[i + 1];
        j++;
        i++;
    }

    i = 0;
    sobre[j] = '\0';

    while (sobre[i] != '\0') {
        if ((sobre[i] >= 97) && (sobre[i] <= 122))
            sobre[i] = sobre[i] - 32;
        i++;
    }

    printf("\n%s, %s", sobre, nome);
}
