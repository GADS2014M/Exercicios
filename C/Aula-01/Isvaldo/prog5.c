#include <stdio.h>
/***********************************************************
*faça um algoritmo que calcule o novo valor de um salário a*
* partir de um valor percentual de reajuste. O valor atual *
*do salário e o valor percentual do reajuste devem ser     *
* informados pelo usuário como, por exemplo, 7,3%.         *
***********************************************************/
// declarando as variaveis
float salario;
float reajuste;
main () {
// inicio do programa
printf("\n informe seu salario atual: ");
scanf("%f",&salario);
// calculando reajuste
reajuste = salario*0.073;
//mostrando resultado
printf("\n seu reajuste e %.2f e seu novo salario e  %.2f\n",reajuste,reajuste+salario);

// fim do programa
}
