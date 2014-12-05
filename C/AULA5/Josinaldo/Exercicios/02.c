#include <stdio.h>
#include <string.h>

    /*
        2. Faça um programa que leia uma frase do teclado e mostre o total de cada vogal encontrada no texto, ou seja, o número de as, es, is, os e us.
    */

// Tamanho da string
const t = 100;

main(){

    char frase[t];
    int i, fim;
    // Onde ira salvar a quantidade
    int contA = 0, contE = 0, contI = 0, contO = 0, contU = 0;

    printf("Por favor, digite uma frase: ");
    gets(frase);
    // Pega tamanho da frase digitada
    fim = strlen(frase);

    for(i = 0; i < fim; i++){
        switch(frase[i]){
            case 'a':
            case 'A':
                contA++;
                break;
            case 'e':
            case 'E':
                contE++;
                break;
            case 'i':
            case 'I':
                contI++;
                break;
            case 'o': case 'O':
                contO++;
                break;
            case 'u':
            case 'U':
                contU++;
                break;
        }
    }
    // Imprime valores
    printf("Quantidades achadas: \n");
    printf("a = %d\n", contA);
    printf("e = %d\n", contE);
    printf("i = %d\n", contI);
    printf("o = %d\n", contO);
    printf("u = %d", contU);

}
