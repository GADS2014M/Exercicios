#include <stdio.h>

main() {

int i = 2, n, primo = 1;

printf("Por favor, entre com um numero: ");
scanf("%d", &n);

while ((primo) && (i < n)) {
    if((n % i) == 0)
    primo = 0;
    else
    i++;
}
if (primo)
    printf("\nNumero %d e primo\n", n);
else
    printf("\nNumero %d nao e primo\n", n);

}
