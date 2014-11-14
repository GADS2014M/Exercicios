#include <stdio.h>

main() {
    const int tam = 10;
	int i, pos = 0, achou = 0, num, vet[tam];

    for (i = 0; i < tam; i++) {
        printf("Entre com um numero: ");
        scanf("%d", &vet[i]);
    }
	printf("Entre com um numero a ser pesquisado: ");
	scanf("%d", &num);
	do {
		if (vet[pos] == num)
			achou = 1;
		else
			pos++;
	} while ((!achou) && (pos < tam));
	if (achou)
		printf("Numero foi achado");
	else
		printf("Numero nao foi achado");
}
