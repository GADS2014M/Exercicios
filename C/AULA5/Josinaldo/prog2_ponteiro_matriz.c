#include <stdio.h>

main(){

    int mat[4][3] = {{0},{0},{0},{0}};
    int *p = mat;

    printf("Endereco de mat[0][0] = %p\n", &mat[0][0]);
    printf("Endereco de mat[0][0] = %p\n", p);
    // printf("Endereco de mat[0][0] = %p\n", *p); // Pega posição da matriz

}
