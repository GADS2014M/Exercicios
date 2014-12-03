#include <stdio.h>

// Tamanho da string
const t = 100;


main(){

    char frase[t];
    int i, tString;

    printf("Por favor, digite uma frase: ");
    gets(frase);

    printf("Frase invertida: ");
    // Pega tamanho da frase digitada
    tString = strlen(frase) -1;
    for(i = tString; i > -1; i--){
        printf("%c", frase[i]);
    }

}
