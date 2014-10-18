#include <stdio.h>
#define FALSE 0
/*
* Faça um algoritmo que leia um intervalo inferior e superior,
* e mostre os números primos existentes no intervalo. Por exemplo,
* o algoritmo recebe 5 e 10, e mostra como saída 5 e 7. Além disso,
* o algoritmo deve mostrar a quantidade de números primos encontrados no intervalo.
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


main(){
    int first,last,i,count=0;

    puts("Informe inicio do intervalo");
    scanf("%d",&first);
    puts("Informe fim do intervalo");
    scanf("%d",&last);

    for (i=first;i<last+1;i++){
        if (ePrimo(i)){
            printf("%d e primo\n",ePrimo(i));
            count++;
        }
    }
    printf("no total foram %d primos",count);



}
