#include <stdio.h>

main() {

    /*
        3. Faça um algoritmo que leia uma sequência de 20 números inteiros e mostre a soma, média, o maior número e o menor número da sequência.
    */

    int cont, valor, soma, MAnumero, MEnumero, coringa;
    float media;

    soma = 0;
    coringa = 0;

    for (cont = 1; cont <= 20; cont++){

        printf("Por favor, digite um numero inteiro: ");
        scanf("%d", &valor);

        // Soma
        soma = soma + valor;

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

    // Media
    media = (float) soma / 20;

    printf("\nSoma: %d \n", soma);
    printf("Media: %4.2f \n", media);
    printf("Maior numero: %d \n", MAnumero);
    printf("Menor numero: %d \n", MEnumero);

}
