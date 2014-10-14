#include <stdio.h>
#include <math.h>

/***********************************************************
*Faça um algoritmo que calcule a área de uma esfera,       *
*sendo que o comprimento do raio é informado pelo usuário. *
*A área da esfera é calculada multiplicando-se 4 vezes Pi  *
*ao raio ao quadrado.                                      *
************************************************************/
float raio;
float area;
main () {
printf("\ninforme o raio: ");
scanf("%f",&raio);
area = (M_PI*4)*(raio*raio);
printf("\n area e %.2f\n",area);

}
