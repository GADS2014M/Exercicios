#include <stdio.h>
/*3. Faça um algoritmo que leia dois números e mostre o maior número.*/

main() {
int n1;
int n2;
printf("informe  o primeiro numero: ");
scanf("%d",&n1);
printf("informe o segundo numero: ");
scanf("%d",&n2);
printf("numero maior e %d",n1>n2? n1:n2);
}
