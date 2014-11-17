#include <stdio.h>

const int tam = 10;

void levetor(int v[]) {
    int i;

    for (i = 0; i < tam; i++) {
        printf("Entre com um numero: ");
        scanf("%d", &v[i]);
    }
}

void pesquisavetor(int v[], int *ach, int *n) {
	int pos = 0;

	printf("Entre com um numero a ser pesquisado: ");
	scanf("%d", n);
	*ach = 0;
    do {
		if (v[pos] == *n)
			*ach = 1;
		else
			pos++;
	} while ((!(*ach) && (pos < tam)));
}

void mostraresultado(int ach, int n) {

    if (ach)
        printf("Numero %d foi achado", n);
    else
        printf("Numero %d nao foi achado", n);
}

main() {
	int achou, num;
	int vet[tam];

    levetor(vet);
    pesquisavetor(vet, &achou, &num);
	mostraresultado(achou, num);
}
