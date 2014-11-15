#include <stdio.h>

main(){

    /* Strings */

    char nome[20], snome[20];

    printf("Entre com um nome: ");
    gets(nome); // Pede um valor
    strcpy(snome, " Maia"); // Atribuição
    puts(nome); // Exibe o valor
    strcat(nome, snome);
    strcat(nome, " Maia"); // Contatenação a direita
    puts(nome);
    printf("Tamanho = %d", strlen(nome)); // Exibe tamanho da string

}
