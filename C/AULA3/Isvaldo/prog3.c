#include <stdio.h>

/*Faça um algoritmo que leia uma sequência de 20 números inteiros
* e mostre a soma, média, o maior número e o menor número da sequência.
*/

main (){
int soma=0,maior=0,menor=0,numero,i=0;
float media;
int flag = 1;
puts("informe uma sequencia de 20 numeros:");
for (;i<4;i++){
    scanf("%d",&numero);
    maior = flag?numero:maior;
    menor = flag?numero:menor;
    maior = numero>maior?numero:maior;
    menor = numero<menor?numero:menor;
    soma += numero;
    flag =0;
}
media = (float) soma/20;
printf("\n Maior: %d\n Menor: %d\n Soma: %d\n Media: 4%.2f",maior,menor,soma,media);
}
