#include <stdio.h>

/*
    2.	Faça um programa que leia uma sequência de números terminada pelo número zero e mostre apenas os números que forem maiores ou iguais a média dos elementos lidos.
        A sequência pode ter no máximo 20 números. Implemente dois procedimentos.
*/

const int fim = 0;
const int tamanho = 20;

void ler(int numeros[], int *indice, int *total){
    int valor;
    do{
        printf("Entre com um numero: ");
        scanf("%d", &valor);
        if(*indice < tamanho){
            if(valor != fim){
                numeros[*indice] = valor;
                *indice += 1;
                *total += valor;
            }
        }else{
            printf("\nErro: valor maximo atingido.");
        }
    }while((valor != fim) && (*indice < tamanho));
}

void mostramedias(int numeros[], int indice, int total){
    // Média
    float media = (float) total / indice;
    printf("\nMedia: %2.1f", media);
    // Verifica quais sao maiores ou iguais a media
    int i;
    printf("\nNumeros maiores ou iguais a media:\n");
    for(i = 0; i < indice;i++){
        if(numeros[i] >= media){
             printf("%d\n", numeros[i]);
        }
    }
}

main(){

    int numeros[tamanho], indice = 0, total = 0;

    // Ler dados
    ler(numeros, &indice, &total);

    // Verifica
    mostramedias(numeros, indice, total);

}
