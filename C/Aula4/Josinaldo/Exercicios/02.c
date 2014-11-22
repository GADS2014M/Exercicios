#include <stdio.h>

main(){

    /*
        2. Faça um programa que some dois vetores {1, 2, 3, 4, 5, 6, 7, 8} e {10, 20, 30, 40, 50, 60, 70, 80}
        e mostre o resultado da soma em um terceiro vetor do mesmo tamanho e tipo.
    */

    int vetor_1[8] = {1, 2, 3, 4, 5, 6, 7, 8},
        vetor_2[8] = {10, 20, 30, 40, 50, 60, 70, 80},
        vetor_3[8],
        i = 0;

        // PORQUE 8??

        while(i < 8){
            vetor_3[i] = vetor_1[i] + vetor_2[i];
            printf("%d + %d = %d\n", vetor_1[i], vetor_2[i], vetor_3[i]);
            i++;
        }

}
