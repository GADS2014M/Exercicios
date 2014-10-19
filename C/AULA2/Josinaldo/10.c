#include <stdio.h> // Entrada e saida
#include <locale.h> // Caracteres especiais

main (){

    setlocale(LC_ALL,""); // Caracteres especiais

    // Variáveis
    int data, dia, mes, ano;

    printf("\n [ ------------------- Valida DATA ------------------- ] \n");

    // Solicita o dia
    printf("\n   Por favor, digite o dia: ");
    scanf("%d", &dia);

    // Solicita o mês
    printf("   Por favor, digite o mês: ");
    scanf("%d", &mes);

    // Solicita o ano
    printf("   Por favor, digite o ano: ");
    scanf("%d", &ano);

    // Verifica e exibe o resultado
    if (dia <= 0 || dia > 31){
        printf("\n   Erro: dia inválido \n");
    } else if (mes <= 0 || mes > 12){
        printf("\n   Erro: mês inválido \n");
    } else if (ano < 1900) {
        printf("\n   Erro: ano inválido \n");
    } else {
        printf("\n   Data correta: %d/%d/%d \n", dia, mes, ano);
    }


    printf("\n [ --------------------------------------------------- ] \n");


}
