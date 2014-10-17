#include <stdio.h> //Entrada e saida

main(){

    // Variáveis
    float CPlado, area;

    printf(" \n [-- Calculando a area de um quadrado --] \n");
    printf("\n Digite o comprimento do lado: ");
    scanf("%f", &CPlado);

    //Calcula e exibe o resultado
    area = (float) CPlado * CPlado;
    printf("\n Area do quadrado = %2.1f \n", area);

}
