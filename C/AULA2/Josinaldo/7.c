#include <stdio.h> // Entrada e saida7
#include <locale.h> // Caracteres especiais

main (){

    setlocale(LC_ALL,""); // Caracteres especiais

    //Variáveis
    float salario;

    printf("\n[ ----------- Calcula salário ----------- ]\n");
    printf("\nPor favor, digite o seu salário: ");
    scanf("%f", &salario);

    if (salario <= 0){
        printf("\n Erro: por favor, digite um salário válido. \n");
    } else if (salario <= 1000){
        printf("\n 30 porcento de aumento \n");
    } else if (salario <= 2000){
        printf("\n 25 porcento de aumento \n");
    } else if (salario <= 3000){
        printf("\n 20 porcento de aumento \n");
    } else if (salario <= 4000){
        printf("\n 15 porcento de aumento \n");
    } else {
        // Acima de 4000
        printf("\n 10 de aumento \n");
    }

}
