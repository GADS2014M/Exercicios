#include <stdio.h>

main(){

    int n1, n2;
    float media;

    printf("Entre com a nota n1: ");
    scanf("%d", &n1);
    printf("Entre com a nota n2: ");
    scanf("%d", &n2);

    // Para exibir numero fracionado pode ser usado:
    // media = (n1 + n2) / 2.0;
    //ou (float)
    media = (float) (n1 + (2 * n2)) / 3;
    printf("\n Media = %f \n", media);

}
