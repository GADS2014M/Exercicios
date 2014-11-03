#include <stdio.h>

main(){

    /*
        9.	Uma progressão aritmética é uma sequência numérica em que cada termo, a partir do segundo, é igual a soma do termo anterior com uma constante. A constante é calculada como sendo a diferença entre o segundo e o primeiro número. Faça um algoritmo que receba dois números inteiros e, a partir dessa informação, gere uma sequência em progressão aritmética.
    */

    long int num1, num2, dif;
	int i, numr;

	printf("Entre com o numero de elementos: ");
    scanf("%d", &numr);
    printf("Entre com o 1o numero: ");
    scanf("%d", &num1);
	printf("Entre com o 2o numero: ");
    scanf("%d", &num2);
	printf("%d %d ", num1, num2);
	dif = num2 - num1;
	for (i = 3; i <= numr; i++) {
		num2 += dif;
		printf("%d ", num2);
	}
}
