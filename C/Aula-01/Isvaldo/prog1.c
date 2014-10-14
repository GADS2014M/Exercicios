#include <stdio.h>
/***********************************************************
* Faça um algoritmo que troque o valor de duas variáveis.  *
* Por exemplo, o algoritmo lê n1 igual a 3 e n2 a 17,      *
* e mostra n1 igual a 17 e n2 a 3                          *
*                                                          *
************************************************************/

// Declaração de variaveis
int a1;
int a2;
int temp;
main () {
// Corpo do programa/
printf("\n Digite a1\n");
scanf("%d",&a1);
printf("\n Digite a2\n");

scanf("%d",&a2);
// Inversão de variaveis com auxilio de uma variavel temp
temp = a1;
a1 = a2;
a2 = temp;
// mostra todos os resultados
printf("\na1 =  %d  a2 = %d\n",a1,a2);

}
