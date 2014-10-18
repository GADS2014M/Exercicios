#include <stdio.h>

/*
*Faça um algoritmo que leia uma sequência de números inteiros terminado
* por zero e mostre a soma, média, o maior número e o menor número da sequência.
*/
main () {
int soma=0,maior=0,menor=0,numero,count=0;
float media=0;
int flag=1;
puts("Digite uma sequencia de numeros: ");
scanf("%d",&numero);

while(numero !=0){
    maior = flag?numero:maior;
    menor = flag?numero:menor;
    maior = numero>maior?numero:maior;
    menor = numero<menor?numero:menor;
    soma += numero;
    count++;
    flag=0;
    scanf("%d",&numero);
}

media = soma==0? 0:(float) soma/count;
printf("\n Maior: %d\n Menor: %d\n Soma: %d\n Media: %.2f",maior,menor,soma,media);

}
