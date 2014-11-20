#include <stdio.h>
#include <string.h>

main () {
    char frase[30];
    int j, tam, a = 0, e = 0, i = 0, o = 0, u = 0;

    printf("Entre com uma frase: ");
    gets(frase);

    tam = strlen(frase) - 1;

    for (j = 0; j <= tam; j++) {

        switch (frase[j]) {
        case 'a':
        case 'A':
            a += 1;
        break;
        case 'e':
        case 'E':
            e += 1;
        break;
        case 'i':
        case 'I':
            i += 1;
        break;
        case 'o':
        case 'O':
            o += 1;
        break;
        case 'u':
        case 'U':
            u += 1;
        break;
        }

    }

    printf("A frase tem %d \"as\", %d \"es\", %d \"is\", %d \"os\", %d \"us\"", a, e, i, o, u);
}
