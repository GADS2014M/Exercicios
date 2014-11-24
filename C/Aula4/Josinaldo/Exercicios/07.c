#include <stdio.h>
#include <limits.h>

main(){

    /*
        7. Faça um programa que mostre o menor elemento do vetor {10, 2, 30, 4, 50, 6, 70, 8, 9, 1}
        e a sua posição.
    */

    int vetor[10] = {10, 2, 30, 4, 50, 6, 70, 8, 9, 1},
        i,
        min = INT_MAX,
        posicao;

    for(i = 0; i <= 9; i++){
        if(vetor[i] < min){
            min = vetor[i];
            posicao = i;
        }
    }

    printf("O menor valor e: %d\nSua posicao e:   %d\n", min, posicao);

}
