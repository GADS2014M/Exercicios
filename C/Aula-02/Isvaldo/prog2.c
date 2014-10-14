#include <stdio.h>
/*
2. Faça um algoritmo que leia um número e mostre se o mesmo é par ou ímpar.*/

main () {
int numero;
printf("Informe um numero: ");
scanf("%d",&numero);
printf(numero%2==0?"Par":"impa");
}
