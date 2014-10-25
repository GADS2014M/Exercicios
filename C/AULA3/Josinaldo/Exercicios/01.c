#include <stdio.h>

main () {

    char caractere;
    int vogal;

    vogal = 0;

    do {
        printf("Por favor, digite um caracter: ");
        fflush(stdin);
        scanf("%c", &caractere);

        if (caractere == 'a'){
             vogal ++;
        } else if (caractere == 'e'){
             vogal ++;
        } else if (caractere == 'i'){
             vogal ++;
        } else if (caractere == 'o'){
             vogal ++;
        } else if (caractere == 'u'){
             vogal ++;
        }

    } while(caractere != '.');

    printf("\nA quantidade de vogal e: %d", vogal);

}
