#include <stdio.h>

main(){

    /*
        3. Faça um programa que leia uma sequência de números terminada pelo número
        zero e mostre os números na ordem invertida. A sequência pode ter no máximo 20 números.
    */

    int numero[21], i = 0, fim = 0;

    do {
    i++;
        if (i <= 20){
            printf("Digite uma seguencia de numeros: ");
            scanf("%d", &numero[i]);
            if(numero[i] == 0){
                i--;
                fim = 1;
            }
        } else {
            printf("\nLimite maximo atingido!\n");
            i--;
            fim = 1;
        }
    } while(fim == 0);

    printf("\n-- Invertido --\n");

    do {
        printf("%d\n", numero[i]);
        i--;
    } while(i >= 1);

}
