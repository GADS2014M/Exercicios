#include <stdio.h>

main(){

    float conta, gorgeta;

    printf("Entre com o valor da conta: ");
    scanf("%f", &conta);

    gorgeta = conta * 0.1;
    printf("\n Valor da gorjeta = %.2f \n", gorgeta);

    conta = conta + gorgeta;
    printf("\n Valor final da conta = %.2f \n", conta);

}
