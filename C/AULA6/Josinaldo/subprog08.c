#include <stdio.h>

/* MATRIZ, obrigatorio colocar numero de colunas quando passado no parámetro: vetor[][OBRIGATORIO] */

const int nl = 4, nc = 5;

void initvet(int m[][nc]) {
	int i, j;

	for (i = 0; i < nl; i++)
		for (j = 0; j < nc; j++)
			m[i][j] = 0;
}

void mostravet(int m[][nc]) {
	int i, j;

	for (i = 0; i < nl; i++) {
		for (j = 0; j < nc; j++)
			printf("%d ", m[i][j]);
		printf("\n");
	}
}

main() {
	int mat[nl][nc];

	initvet(mat);
	mostravet(mat);
}
