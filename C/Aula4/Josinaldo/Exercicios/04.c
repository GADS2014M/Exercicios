#include <stdio.h>

main(){

    /*
        4. Faça um programa que leia uma sequência de números terminada pelo número zero
        e mostre apenas os números que forem maiores ou iguais a média dos elementos lidos.
        A sequência pode ter no máximo 20 números.
    */

    int numero[21],
        i = 0,
        fim = 0,
        total_valores;
    float media = 0;

    do {
    i++;
        if (i <= 20){
            printf("Digite um valor inteiro: ");
            scanf("%d", &numero[i]);
            if(numero[i] == 0){
                i--;
                fim = 1;
            }
        } else {
            printf("\nLimite maximo atingido!\n");
            i--;
            fim = 1;
        }
    } while(fim == 0);

    total_valores = i;

    // Lendo os valores
    while(i >= 1){
        media = media + numero[i];
        i--;
    }
    // Calcula media
    if (total_valores != 1){
        media = (float) media / total_valores;
        printf("\nMedia e: %3.1f\n", media);
        // Verifica quem esta acima da média
        for(i = 1; i <= total_valores ;i++){
            if(numero[i] == media){
                printf("\n%d e igual a media", numero[i]);
            } else if(numero[i] > media){
                printf("\n%d e maior que a media", numero[i]);
            }
        }
    } else {
        printf("\nPor favor, digite mais de um valor.\n");
    }

}
