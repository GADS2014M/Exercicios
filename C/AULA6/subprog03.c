#include <stdio.h>

/* Passagem sem referência */

void mostraNum(int n) {
    printf("Numero digitado: %d\n", n);
    n = n + 1;
}

main(){

    int num;

    printf("Entre com um numero: ");
    scanf(" %d", &num);
    mostraNum(num);
    printf("Numero digitado foi alterado: %d", num);

}
