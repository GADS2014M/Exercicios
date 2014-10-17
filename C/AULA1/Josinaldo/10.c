#include <stdio.h> // Entrada e saida

main () {

    // Variáveis
    float volume, CPraio, altura;
    float const pi = 3.14;

    printf(" \n [-- Calculando o volume de uma caixa de agua cilindrica --] \n");

    // Solicita comprimento do raio
    printf("\nPor favor, digite o comprimento do raio: ");
    scanf("%f", &CPraio);

    // Solicita a altura
    printf("\nPor favor, digite a altura: ");
    scanf("%f", &altura);

    // Calcula e exibe o resultado
    volume = pi * (CPraio * CPraio) * altura;
    printf("\nO volume e: %2.1f\n", volume);

}
