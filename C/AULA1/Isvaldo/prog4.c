#include <stdio.h>

/*************************************************************
*4. Faça um algoritmo que calcule a gorjeta a ser paga de uma*
* conta de restaurante. A gorjeta é calculada como sendo 10% *
* do valor da conta, que deve ser informado pelo usuário.    *
**************************************************************/

// iniciando as variaveis
float conta;
float gorjeta;

main () {
// inicio do programa
printf("\nInforme o valor da conta: ");
scanf("%f",&conta);
// calculando valor (multiplico por 0.1 obtendo 10%)
gorjeta =  conta*0.1;
// somo n  gorjeta a conta
conta += gorjeta;
// motrando o resultado
printf("\n total da conta e R$%.2f\n",conta);
}
