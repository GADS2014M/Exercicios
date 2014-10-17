#include <stdio.h>

/* 4. Faça um algoritmo que leia três números e mostre o maior número.*/

main () {
int n1,n2,n3,maior;
printf("\nInforme 3 Numeros: \n");
scanf("%d%d%d",&n1,&n2,&n3);
if (n1>n2){
        if (n1>n3){
            maior = n1;
        }else{
            maior = n3;

        }
}else{

    if (n2>n3){
            maior = n2;

        }else{
            maior = n3;

        }
}
printf("\nMaior %d",maior);

}
