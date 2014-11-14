#include <stdio.h>

void verificamaior(int n1, int n2, int *m) {

	if (n1 > n2)
		*m = n1;
	else
		*m = n2;
}

void lenum(int *n) {
    printf("Entre com um numero: ");
    scanf("%d", n);
}

main() {
	int num1, num2, maior;

	lenum(&num1);
	lenum(&num2);
	verificamaior(num1, num2, &maior);
	printf("Maior numero e: %d", maior);
}
