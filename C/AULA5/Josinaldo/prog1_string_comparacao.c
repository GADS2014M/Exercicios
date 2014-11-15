#include <stdio.h>


main(){

    /* Strings */

    char nome1[20], nome2[20];

    strcpy(nome1, "Luiz");
    strcpy(nome2, "luiz"); // L (maiusculo <> de minusculo)

    // Comparação de strings, (Tabela ASCII (Hex)) - ler mais no slide
    if(strcmp(nome1, nome2) == 0){
        printf("Iguais");
    } else {
        printf("Diferentes");
    }
    // Exibindo o valor de retorno do if
    printf("\nValor = %d\n", strcmp(nome1, nome2));

}
