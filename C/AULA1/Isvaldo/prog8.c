#include <stdio.h>
#include <math.h>

/***********************************************************
*8. Faça um algoritmo que calcule a área de um círculo,    *
* sendo que o comprimento do raio é informado pelo usuário.*
* A área do círculo é calculada multiplicando-se Pi        *
* ao raio ao quadrado.                                     *
************************************************************/
float raio;
float area;
main () {

printf("\nInforme o raio: ");
scanf("%f",&raio);
area = M_PI*(raio*raio);
printf("\narea do circulo e %.2f\n",area);

}
