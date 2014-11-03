#include <stdio.h>

main(){

    /*
        8.	Faça um algoritmo que apresente a sequência de Fibonacci. A sequência começa com 0 e 1, e então produz o próximo número de Fibonacci somando os dois anteriores para formar o próximo. Por exemplo, 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946...
    */

    long int num1 = 0, num2 = 1, num3;
	int i, numr;

    printf("Entre com o numero de elementos: ");
    scanf("%d", &numr);
	printf("%d %d ", num1, num2);
	for (i = 3; i <= numr; i++) {
		num3 = num1 + num2;
		printf("%d ", num3);
		num1 = num2;
		num2 = num3;
	}
}

