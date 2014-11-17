#include <stdio.h>

/* Vetor é um ponteiro para o primeiro índice [0]!, pode se usar como parâmetro: "*vetor" ou "vetor[]" */

const int tam = 10;

void initvet(int *v) {
	int i;

	for (i = 0; i < tam; i++)
		v[i] = 0;
}

void mostravet(int v[]) {
	int i;

	for (i = 0; i < tam; i++)
		printf("%d ", v[i]);
}

main() {
	int vet[tam];

	initvet(vet);
	mostravet(vet);
}
