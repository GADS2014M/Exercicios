#include <stdio.h>

main(){

    /*
        7.	Faça um algoritmo para mostrar a tabuada de 1 a 10.
    */

    int i, j;
	int const limtab = 10;

	printf("\n");
	for (i = 1; i <= limtab; i++) {
		for (j = 1; j <= limtab; j++)
			printf("%4d", i*j);
		printf("\n");
	}
}
