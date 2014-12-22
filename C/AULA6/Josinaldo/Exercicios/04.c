#include <stdio.h>

/*
    4.	Faça um programa que leia duas matrizes 2x2 e gere uma terceira matriz que seja a multiplicação
        dos elementos na mesma posição das duas matrizes lidas. Implemente, pelo menos, três procedimentos.
*/

const int linha  = 2;
const int coluna = 2;

void ler_matriz(int mat[][coluna]){
    int i, j;
    printf("Por favor, digite os valores da matriz 2x2: \n");
    for(i = 0;i < linha;i++){
        for(j = 0;j < coluna;j++){
            printf("Linha %d, Coluna %d: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
}

void multiplica_matriz(int mat1[][coluna], int mat2[][coluna], int mat3[][coluna]){
    int i, j;
    for(i = 0;i < linha;i++){
        for(j = 0;j < coluna;j++){
            mat3[i][j] = mat1[i][j] * mat2[i][i];
        }
    }
}

void exibe_matriz(int mat3[][coluna]){
    int i, j;
    printf("\n");
    for(i = 0;i < linha;i++){
        for(j = 0;j < coluna;j++){
            printf("%2d ", mat3[i][j]);
        }
        printf("\n");
    }
}

main(){

    int mat1[linha][coluna];
    int mat2[linha][coluna];
    int mat3[linha][coluna];

    int indice_L, indice_C;

    // Ler
    ler_matriz(mat1);
    ler_matriz(mat2);

    // Multiplica
    multiplica_matriz(mat1, mat2, mat3);

    // Exibe
    exibe_matriz(mat3);

}
