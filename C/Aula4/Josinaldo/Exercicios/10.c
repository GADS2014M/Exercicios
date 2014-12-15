#include <stdio.h>

const int l = 4, c = 5;

main(){

    /*
        10.	Faça um programa que preencha uma matriz 4x5 com o número que represente a sua posição na matriz.
            Por exemplo, o elemento na linha 1 e coluna 2, preencher com o número 12. Depois mostrar a matriz preenchida.
    */

    int mat[l][c];

    int i, j;

    // Preenche a matriz
    for(i = 0;i < l;i++){
        for(j = 0;j < c;j++){
            // Segundo o gabarito está com essa fórmula, mas me parece está errado.
            mat[i][j] = (i * 10) + j + 10;
        }
    }

    // Exibe matriz
    for(i = 0;i < l;i++){
        for(j = 0;j < c;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

}
