#include <stdio.h>

/********************************************************************
*6. Faça um algoritmo que calcule a área de um quadrado, sendo que  *
*o comprimento do lado é informado pelo usuário. A área do quadrado *
*é calculada elevando-se o lado ao quadrado.                        *
*********************************************************************/
int lado;
int area;
main() {
// inicio do programa
printf("\ninforme  o comprimento do lado: \n");
scanf("%d",&lado);
area =  lado*lado;
printf("\na area e %d\n",area);

}

