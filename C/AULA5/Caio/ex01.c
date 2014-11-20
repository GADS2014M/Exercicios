#include <stdio.h>
#include <string.h>

main () {
    int i, f;
    char frase[30];

    printf("Entre com uma frase: ");
    gets(frase);

    f = strlen(frase) - 1;

    for (i = f; i >= 0; --i) {
        printf("%c", frase[i]);
    }
}
