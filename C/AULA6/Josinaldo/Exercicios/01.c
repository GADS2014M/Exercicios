#include <stdio.h>

void fib(int n) {
	int num1 = 0, num2 = 1, num3, i;

	printf("%d %d ", num1, num2);
	for (i = 3; i <= n; i++) {
		num3 = num1 + num2;
		printf("%d ", num3);
		num1 = num2;
		num2 = num3;
	}
}

main() {
	int numr;

    printf("Entre com o numero de elementos: ");
    scanf("%d", &numr);

	fib(numr);
}
