#include <stdio.h>

main() {

int i, n, primo = 1;

printf("Por favor, entre com um numero: ");
scanf("%d", &n);

for (i = 2; i < n; i++) {
    if((n % i) == 0)
    primo = 0;
    break;
}
if (primo)
    printf("\nNumero %d e primo\n");
else
    printf("\nNumero %d nao e primo\n");

}
