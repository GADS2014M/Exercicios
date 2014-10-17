#include <stdio.h> //Entrada e saida

main(){

    // Variáveis
    float altura, base, area;

    printf(" \n [-- Calculando area de um retangulo --] \n");

    // Pergunta altura
    printf("\nPor favor, digite a altura: ");
    scanf("%f", &altura);

    // Pergunta a base
    printf("\nPor favor, digite a base: ");
    scanf("%f", &base);

    // Calcula e exibe o resultado
    area = (float) altura * base;
    printf("\nA area do retangulo e: %2.1f", area);

}
