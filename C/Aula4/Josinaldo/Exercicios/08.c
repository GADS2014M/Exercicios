#include <stdio.h>

main(){

    /*
        8. Faça um programa que processe a matriz 1 e mostre a matriz 2.

        Matriz 1            Matriz 2
        1 2 3 4             1 5 9
        5 6 7 8             2 6 10
        9 10 11 12          3 7 11
                            4 8 12
    */

    int l, c, mat1[3][4] = {{1,2,3,4} , {5,6,7,8} , {9,10,11,12}};

    printf("Matriz original: \n\n");
    for(l=0;l<3;l++){
        for(c=0;c<4;c++){
            printf("%d ", mat1[l][c]);
        }
        printf("\n");
    }
    printf("\nMatriz processada: \n\n");
    for(l=0;l<4;l++){
        for(c=0;c<3;c++){
            printf("%d ", mat1[c][l]);
        }
        printf("\n");
    }
}
