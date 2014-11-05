#include <stdio.h>

main(){

    /*
        10.	Faça um algoritmo que informe se um número é primo ou não. Um número primo é aquele que é divisível por um e ele mesmo. Por exemplo, 17 é um número primo.
    */

    int num, divisor = 2;
	int eprimo = 1;

	printf("Entre com um numero: ");
    scanf("%d", &num);
	while ((divisor <= (num-1)) && eprimo) {
		if ((num % divisor) == 0)
			eprimo = 0;
		divisor++;
	}
	if (eprimo)
		printf("Numero e primo\n");
	else
		printf("Numero nao e primo\n");

}

