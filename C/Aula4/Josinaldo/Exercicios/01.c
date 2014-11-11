#include <stdio.h>

main(){

    /*
    1. Faça um programa que transfira o conteúdo do vetor {10, 20, 30, 40, 50, 60, 70, 80}
       para um outro vetor do mesmo tipo e tamanho, e mostre o conteúdo do novo vetor na ordem inversa.
    */

    int vetor1[8] = {10, 20, 30, 40, 50, 60, 70, 80},
        vetor2[8],
        i;

    for(i=0;i<=7;i++){
        vetor2[i] = vetor1[i];
    }
    for(i=7;i>=0;i--){
        printf("Novo vetor: %d\n", vetor2[i]);
    }

}
