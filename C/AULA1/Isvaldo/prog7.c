#include <stdio.h>

/**************************************************************
*7. Faça um algoritmo que calcule a área de um retângulo,     *
* sendo que os comprimentos da altura e da base são informados*
* pelo usuário. A área do retângulo é calculada               *
*multiplicando-se a altura pela base.                         *
***************************************************************/
float base;
float altura;
float area;

main () {
printf("\n informe a base: ");
scanf("%f",&base);
printf("\n informe a altura: ");
scanf("%f",&altura);

area = base*altura;
printf("\n area e %.2f\n",area);


}
