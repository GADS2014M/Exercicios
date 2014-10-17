#include <stdio.h> //Entrada e saida

main(){

    // Variáveis
    float area, CPraio;
    float const pi = 3.14;

    printf(" \n [-- Calculando area de um circulo --] \n");

    // Pergunta o comprimento do circulo
    printf("\nPor favor digite o comprimento do raio: ");
    scanf("%f", &CPraio);

    // Calcula e exibe o resultado
    area = pi * (CPraio * CPraio);
    printf("\nA area do circulo e: %2.1f\n", area);

}
