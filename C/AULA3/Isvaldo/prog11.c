#include <stdio.h>
#define FALSE 0
/*
* Faça um algoritmo que leia uma sequência de números
* terminada em zero e mostre para cada número lido se ele é primo ou não.
*/
/* Curiosidade
 fazendo esse exercicio reparei que

 1 primo
 5 primo
 7 primo

 157 primo
 751 primo

 também funciona com 2 alg
 1319 primo (13 primo e 19 primo)

 1913 primo (19 primo e 13 primo)

 */

int ePrimo(int numero) {
    int i;
    if (numero %2 == 0  && numero != 2) {
            return FALSE;
    }
    for (i=2;i<numero-1;i++){
            i++;
            if (numero % i == 0){
                return FALSE;
            }
    }
    return numero;
    }

main () {
int numero=0;
puts("informe um numero: ");
scanf("%d",&numero);
while (numero != 0) {
    printf("%d",numero);
    printf("%s",ePrimo(numero)?"e primo\n":"nao e primo\n");
    scanf("%d",&numero);
}
puts("0 foi precionado Exit()");

}
