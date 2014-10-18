#include <stdio.h>
#define FALSE 0
/*
* Faça um algoritmo que informe se um número é primo ou não.
* Um número primo é aquele que é divisível por um e ele mesmo.
* Por exemplo, 17 é um número primo.
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
int numero;
puts("informe um numero: ");
scanf("%d",&numero);
if (ePrimo(numero))
        puts("e primo");
    else
        puts("Nao é primo");
}
