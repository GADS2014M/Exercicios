#include <stdio.h>

main(){

    /*
        5. Faça um programa que leia uma sequência de números entre 1 e 20 e mostre quantas
        vezes cada número apareceu. A sequência de números termina com um número igual a zero.
    */

    const int tam = 20;

    int numero, vetor[20] = {0}, cont;

    do{
        printf("Digite um numero entre 1 e 20: ");
        scanf(" %d", &numero);
        if(numero >= 1 && numero <= tam){
        vetor[numero-1]++;
        } else {
            printf("Erro: numero errado.\n");
        }
    }while(numero != 0);

    for(cont=0;cont<tam;cont++){
        printf("\nO numero %d foi digitado %d veze(s)", cont+1, vetor[cont]);
    }

}
