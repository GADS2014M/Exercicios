#include <stdio.h>

main(){

    /*
        11.	Faça um algoritmo que leia uma sequência de números terminada em zero e mostre para cada número lido se ele é primo ou não.
    */

    int num, divisor, eprimo;
	int const fim = 0;

	printf("Entre com um numero: ");
    scanf("%d", &num);
	while (num != fim) {
		eprimo = 1;
		divisor = 2;
		while ((divisor <= (num-1)) && eprimo) {
			if ((num % divisor) == 0)
				eprimo = 0;
				divisor++;
		}
		if (eprimo)
			printf("Numero e primo\n");
		else
			printf("Numero nao e primo\n");
		printf("Entre com um numero: ");
		scanf("%d", &num);
	}
}

