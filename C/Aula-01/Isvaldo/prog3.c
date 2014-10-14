#include <stdio.h>
/****************************************************************
*3. Faça um algoritmo para calcular a média de duas notas       *
*digitadas pelo usuário, sendo que a segunda nota tem peso dois.*
*****************************************************************/

//declarando as variaveis
int nota1;
int nota2;
float resultado;

main () {
// inicio do programa

//leitura das variaveis
printf("\ndigite a nota1: ");
scanf("%d",&nota1);
printf("\ndigite a nota2: ");
scanf("%d",&nota2);

// calculo da media com casting
resultado = (float) (nota1+(nota2*2))/2;

// mostrando resultado

printf("\nmedia e %.2f\n",resultado);
// fim programa

}
