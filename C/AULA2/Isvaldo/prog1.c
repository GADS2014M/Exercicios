#include <stdio.h>

/*1. Faça um algoritmo que leia um número e mostre se o mesmo é positivo, negativo ou zero.*/

main () {
int numero ;
printf("digite um numero : ");
scanf("%d",&numero);
if (numero>0) {
    printf("numero possitivo");
}else {
    if  (numero<0) {
        printf("numero negativo");
    }else {
        printf("Zero !");
    }

    }
}
