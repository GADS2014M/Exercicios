#include <stdio.h>

main() {

    int mes;

    do {
    printf("Entre com um mes valido: ");
    scanf("%d", &mes);
        if ((mes < 1) || (mes > 12)){
            printf("\nErro: mes invalido\n");
        }
    } while ((mes < 1) || (mes > 12));

}
