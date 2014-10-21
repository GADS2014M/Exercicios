#include <stdio.h>

main()
{
    // zera todos os vetores int vet[10] = {0} OBS: para retirar o lixo de dentro do vetor
    int vet[10] = {1,2,3,4,5,6,7,8,9,10}, i;

    for (i = 0; i < 10; i++) {
        printf("%d\n", vet[i]);
    }

    printf("-------------------\n");

    //De tras para frente
    for (i = 9; i >= 0; i--) {
        printf("%d\n", vet[i]);
    }

}
