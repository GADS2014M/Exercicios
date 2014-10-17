#include  <stdio.h>
/**********************************************
*2. Faça um algoritmo para calcular           *
*a média de duas notas digitadas pelo usuário *
**********************************************/

// declaração das variaveis
int nota1;
int nota2;
float resultado;

main () {
//Inicio do programa

// leitura das variaveis
printf("\nDigite nota 1: ");
scanf("%d",&nota1);
printf("\nDigite nota 2: ");
scanf("%d",&nota2);
// calculando a media usando casting (type)
resultado =  (float) (nota1+nota2)/2;
// imprimindo resultado
printf("\n media e %.2f\n",resultado);

//fim do programa
}
