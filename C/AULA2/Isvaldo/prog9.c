#include <stdio.h>

/*9. Faça um algoritmo que receba um número inteiro,
que representa um determinado mês do ano, e mostre o nome do mês correspondente.
Por exemplo, se for informado o número 2, algoritmo deverá exibir fevereiro.
O algoritmo deve validar se a entrada está correta*/
main () {
int mes;
printf("informe mes 1 a 12: ");
scanf("%d",&mes);

switch(mes){
    case 1:
        printf("\n Janeiro");
    break;

    case 2:
        printf("\n Fevereiro");
    break;
    case 3:
        printf("\n Março");
    break;
    case 4:
        printf("\n Abril");
    break;
    case 5:
        printf("\n Maio");
    break;
    case 6:
        printf("\n Junho");
    break;
    case 7:
        printf("\n Julho");
    break;
    case 8:
        printf("\n Agosto");
    break;
    case 9:
        printf("\n Setembro");
    break;
    case 10:
        printf("\n Outubro");
    break;
     case 11:
        printf("\n Novembro");
    break;
     case 12:
        printf("\n Dezembro");
    break;

    default:
        printf("\n [%d] e mes invalido!!, somente [1-12]",mes);

}

}
