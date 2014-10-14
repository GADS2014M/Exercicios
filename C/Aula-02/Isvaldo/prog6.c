#include <stdio.h>
/* 6. Faça um algoritmo que leia um caractere e informe se o mesmo é uma vogal ou não */
main () {
char letra;
printf("\ninforme um caracter: ");
scanf(" %c",&letra);
switch(letra) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    printf("\nSIM");
    break;
default:
    printf("\nNAO");
    break;
    }

}
