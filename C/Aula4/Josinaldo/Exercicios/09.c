#include <stdio.h>

main(){

    /*
        9.	Faça um programa que leia duas matrizes 2x2 e gere uma terceira matriz
            que seja a soma dos elementos na mesma posição das duas matrizes lidas.
    */

    const int tam = 2;

    int mat1[2][2] = {{10,20},{30,40}},
        mat2[2][2] = {{50,60},{70,80}},
        mat3[2][2];
    int i, j;

    // Exibe matriz 1
    printf("Matriz 1\n");
    for(i = 0;i < tam;i++){
        for(j = 0;j < tam;j++){
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

     // Exibe matriz 2
    printf("Matriz 2\n");
    for(i = 0;i < tam;i++){
        for(j = 0;j < tam;j++){
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // Soma matriz 1 com 2 e salva na matriz 3
    for(i = 0;i < tam;i++){
        for(j = 0;j < tam;j++){
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Exibe matriz 3
    printf("Matriz 3\n");
    for(i = 0;i < tam;i++){
        for(j = 0; j < tam; j++){
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }

}
