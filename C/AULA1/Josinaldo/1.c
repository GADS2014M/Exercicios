#include <stdio.h>

main(){

    int n1, n2, aux;

    printf("Entre com o valor de n1: ");
    scanf("%d", &n1);
    printf("Entre com o valor de n2: ");
    scanf("%d", &n2);

    aux = n1;
    n1 = n2;
    n2 = aux;

    printf("\n O valor de n1 e %d e o valor de n2 e %d \n", n1, n2);

}
