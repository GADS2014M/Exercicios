#include <stdio.h> //Entrada e saida

main(){

    // Variáveis
    float salario, reajuste;

    // Pergunta salário
    printf("Entre com o valor do salario: ");
    scanf("%f", &salario);

    // Pergunta reajuste
    printf("Entre com o valor do reajuste: ");
    scanf("%f", &reajuste);

    // Faz o calculo do reajuste e mostra o salario com o reajuste
    salario = (salario * reajuste / 100) + salario;
    printf("O novo salario sera de: %6.2f", salario);

}
