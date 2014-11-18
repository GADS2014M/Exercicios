#include <stdio.h>

int somavet(int v[]) {
    int i, soma = 0;

    for (i = 0; i < 10; i++)
        soma = soma + v[i];
    return soma;
}

main() {
	int vet[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	printf("Soma dos elementos e: %d", somavet(vet));
}
