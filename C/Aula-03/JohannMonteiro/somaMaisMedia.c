#include <stdio.h>
#include <windows.h>

main ()
{
    int n, soma = 0, cont = 0;
    float media;

    printf("entre com um numero: ");
    scanf("%d", &n);

    while (n != 0)
    {
        soma = soma + n;
        cont++;
        printf("entre com um numero: ");
        scanf("%d", &n);
    }
    if (cont > 0)
    {
    printf("\nSoma = %d\n", soma);
    media = (float) soma / cont;
    printf("\nMedia = %.1f\n", media);
    }
    system("PAUSE");
}
