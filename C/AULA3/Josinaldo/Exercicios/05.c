#include <stdio.h>

main() {

    /*
        5. Faça um algoritmo que leia uma sequência de números inteiros terminado por zero e mostre a soma, média, o maior número e o menor número da sequência.
    */

    int cont, valor, quantidade, soma, MAnumero, MEnumero, coringa;
    float media;

    soma        = 0;
    coringa     = 0;
    quantidade  = 0;

    while (valor != 0){
        printf("Por favor, digite um numero: ");
        scanf("%d", &valor);
        if (valor != 0){
        quantidade ++;

        // Soma = soma + valor
        soma += valor;

        // Maior e menor número
            if (coringa == 1){
                if (valor > MAnumero)
                MAnumero = valor;
                if (valor < MEnumero)
                MEnumero = valor;
            } else {
                // Primeira fez que pega o valor da variavel valor.
                coringa = 1;
                MAnumero = valor;
                MEnumero = valor;
            }
        }
    }

    // Media
    media = (float) soma / quantidade;

    printf("\nSoma: %d \n", soma);
    printf("Media: %4.2f \n", media);
    printf("Maior numero: %d \n", MAnumero);
    printf("Menor numero: %d \n", MEnumero);

}
