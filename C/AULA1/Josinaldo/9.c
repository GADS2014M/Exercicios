#include <stdio.h> //Entrada e saida

main(){

    // Variáveis
    float area, CPraio;
    float const pi = 3.14;

    printf(" \n [-- Calculando area de uma esfera --] \n");

    // Pergunta o comprimento do raio
    printf("\nPor favor digite o comprimento do raio: ");
    scanf("%f", &CPraio);

    // Calcula e exibe o resultado
    area = 4 * pi * (CPraio * CPraio);
    printf("\nA area da esfera e: %2.1f", area);

}
