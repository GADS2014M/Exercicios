#include <stdio.h>

main(){

    /*
        6. Faça um algoritmo que leia um intervalo inferior e superior, e mostre os números primos existentes no intervalo. Por exemplo, o algoritmo recebe 5 e 10, e mostra como saída 5 e 7. Além disso, o algoritmo deve mostrar a quantidade de números primos encontrados no intervalo.
    */

    int num, divisor, eprimo, ini, fim;
	int numprimos = 0;

	printf("Entre com o numero inicial: ");
    scanf("%d", &ini);
	printf("Entre com o numero final: ");
    scanf("%d", &fim);
	for (num = ini; num <= fim; num++) {
		eprimo = 1;
		divisor = 2;
		while ((divisor <= (num-1)) && eprimo) {
			if ((num % divisor) == 0)
				eprimo = 0;
				divisor++;
		}
		if (eprimo) {
			printf("Numero %d e primo\n", num);
			numprimos++;
		}
	}
	if (numprimos > 0)
		printf("Total de primos = %d", numprimos);

}
