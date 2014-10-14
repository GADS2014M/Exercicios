#include <stdio.h>

/*7. Faça um algoritmo que calcule e mostre o novo valor de um salário a partir das seguintes regras:
salários de até R$ 1.000,00 inclusive recebem 30% de aumento,
salários de até R$ 2.000,00 inclusive recebem 25%,
salários de até R$ 3.000,00 inclusive recebem 20%,
salários de até R$ 4.000,00 inclusive recebem 15% e salários acima de R$ 4.000,00 recebem apenas 10%.*/
main(){
float salario;
printf("Informe salario: ");
scanf("%f",&salario);
if (salario<=1000) {
    salario += salario*0.3;
}else if (salario<=2000){
    salario += salario*0.25;
}else if (salario<=3000){
    salario += salario*0.2;
}else if (salario<=4000){
    salario += salario*0.15;
}else if(salario>4000) {
    salario += salario*0.1;
}
printf("\n novo salario %.2f\n",salario);
}
