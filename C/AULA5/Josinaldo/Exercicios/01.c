#include <stdio.h>
#include <string.h>

    /*
        1. Faça um programa que leia uma frase do teclado e mostre-a invertida, ou seja, do final para o começo.
    */

// Tamanho da string
const t = 100;


main(){

    char frase[t];
    int i, tString;

    printf("Por favor, digite uma frase: ");
    gets(frase);

    printf("Frase invertida: ");
    // Pega tamanho da frase digitada
    tString = strlen(frase) -1;
    for(i = tString; i > -1; i--){
        printf("%c", frase[i]);
    }

}
