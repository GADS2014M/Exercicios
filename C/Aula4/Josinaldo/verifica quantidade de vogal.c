#include <stdio.h>

main () {

    char c;
    int cvogal = 0;

    printf("Entre com um caracter: ");
    scanf("%c", &c);

    while (c != '.') {
        switch (c){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cvogal ++;
        }
        printf("Entre com um caracter: ");
        fflush(stdin);
        scanf("%c", &c);
    }
    printf("\nTotal de vogais = %d\n", cvogal);
}
