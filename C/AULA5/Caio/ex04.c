#include <stdio.h>

main () {
    int i = 0;
    char nome_completo[30], nome[16];

    printf("Entre com um nome (\"nome sobrenome\"): ");
    gets(nome_completo);

    while ((nome_completo[i] != ' ') && (nome_completo[i] != '\0')) {
        nome[i] = nome_completo[i];
        i++;
    }

    nome[i] = '\0';

    printf("\n%s", nome);

}
