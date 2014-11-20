#include <stdio.h>
#include <string.h>

main () {
    char palavra[16], memoria[16];
    int i, j, b;

    printf("Entre com uma palavra: ");
    scanf("%s", palavra);

    strcpy(memoria, palavra);

    i = 0; j = (strlen(palavra) - 1);

    while (i < (j/2)) {
        if ((palavra[i] >= 65) && (palavra[i] <= 90))
            palavra[i] = palavra[i] + 32;

        if ((palavra[j] >= 65) && (palavra[j] <= 90))
            palavra[j] = palavra[j] + 32;

        if (palavra[i] != palavra[j]) {
            b = 0;
            break;
        }
        i++;
        j--;
    }

    if (b == 0)
        printf("\nA palavra %s nao e um palindrome.", memoria);
    else
        printf("\nA palavra %s e um palindrome.", memoria);
}
