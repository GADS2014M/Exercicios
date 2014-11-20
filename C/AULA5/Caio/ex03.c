#include <stdio.h>

main () {
    char data[11];
    char d[3], m[3], a[5];
    int i, tam;

    printf("Entre com uma data: ");
    gets(data);

    for (i = 0; i < 11; i++) {

        if (i < 2)
            d[i] = data[i];
        if ((i > 2) && (i < 5))
            m[i - 3] = data[i];
        if (i > 5)
            a[i - 6] = data[i];

    }

    d[2] = '\0';
    m[2] = '\0';

    printf("Dia %s, mes %s, ano %s", d, m, a);
}
