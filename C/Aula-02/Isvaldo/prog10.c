#include <stdio.h>
/*10. Faça um algoritmo que valide uma data, formada por dia,
 mês e ano. Por exemplo, a data 30/2 é inválida, porém a data 29/2/2012 é válida.*/
main () {
int dia,mes,ano;
printf("\ninforme dia mes ano: ");
scanf("%d%d%d",&dia,&mes,&ano);

if (dia==0 || mes==0 || dia>31 || mes>12) {
    printf("\nData invalida");
}else{
    printf("\n Data valida %d/%d/%d",dia,mes,ano);
}
}
