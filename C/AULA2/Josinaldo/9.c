#include <stdio.h> // Entrada e saida
#include <locale.h> // Caracteres especiais

main (){

    setlocale(LC_ALL,""); // Caracteres especiais

    // Variáveis
    int mes;

    printf("\n [ ------------------- Qual o mês? ------------------- ] \n");

    // Solicita o mês desejado
    printf("\n   Por favor, digite o número do mês desejado: ");
    scanf("%d", &mes);

    // Verifica o mês e exibe
    if (mes <= 0 || mes >= 13){
        printf("\n   Erro: mês inválido! \n");
    } else {
        switch (mes){
            case 1:
                printf("\n   %d - Janeiro \n", mes);
                break;
            case 2:
                printf("\n   %d - Fevereiro \n", mes);
                break;
            case 3:
                printf("\n   %d - Março \n", mes);
                break;
            case 4:
                printf("\n   %d - Abril \n", mes);
                break;
            case 5:
                printf("\n   %d - Maio \n", mes);
                break;
            case 6:
                printf("\n   %d - Junho \n", mes);
                break;
            case 7:
                printf("\n   %d - Julho \n", mes);
                break;
            case 8:
                printf("\n   %d - Agosto \n", mes);
                break;
            case 9:
                printf("\n   %d - Setembro \n", mes);
                break;
            case 10:
                printf("\n   %d - Outubro \n", mes);
                break;
            case 11:
                printf("\n   %d - Novembro \n", mes);
                break;
            case 12:
                printf("\n   %d - Dezembro \n", mes);
                break;
        }
    }

    printf("\n [ --------------------------------------------------- ] \n");

}
