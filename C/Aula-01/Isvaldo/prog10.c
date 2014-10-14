#include <stdio.h>
#include  <math.h>
/*******************************************************************
*10. Faça um algoritmo que calcule o volume de uma caixa de água   *
* cilíndrica, sendo que os comprimentos do raio e a altura são     *
*informados pelo usuário. O volume é calculado multiplicando-se Pi,*
* ao raio ao quadrado, a altura.                                   *
********************************************************************/

float raio;
float altura;
float volume;
main () {
printf("\n informe raio: ");
scanf("%f",&raio);
printf("\n informe altura: ");
scanf("%f",&altura);
volume =  M_PI*(raio*raio)*altura;
printf("\n o volume e %.2f\n",volume);
}
