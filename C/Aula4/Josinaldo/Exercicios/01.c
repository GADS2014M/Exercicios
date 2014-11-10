#include <stdio.h>

main(){

    /*
    1. Faça um programa que transfira o conteúdo do vetor {10, 20, 30, 40, 50, 60, 70, 80}
       para um outro vetor do mesmo tipo e tamanho, e mostre o conteúdo do novo vetor na ordem inversa.
    */

    int vetor[8] = {10, 20, 30, 40, 50, 60, 70, 80},
        j = 7,
        i = 0;

    printf("|  Vetor  |  Inverso  |\n\n");

    while(i <= 7){
        printf("    %d         %d\n", vetor[j], vetor[i]);
        i++;
        j--;
    }

}
