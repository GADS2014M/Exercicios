#include <stdio.h>

const int l = 6, c = 3;

main(){

    /*
        11.	Faça um programa que processe a matriz abaixo, sendo que cada linha representa um aluno e cada coluna as suas notas.
            O programa deverá mostrar a média de cada aluno e a média da turma.
            Matriz
            5  7  4
            5  6  7
            3  5  2
            4  5  6
            8  9  7
            2  6  4
    */

    int mat[6][3] = {{5,7,4},
                     {5,6,7},
                     {3,5,2},
                     {4,5,6},
                     {8,9,7},
                     {2,6,4}};
    int i, j;
    float media_aluno[l];
    float media_turma;
    int   todas_as_notas = 0;

    // Calcula média do aluno e média da turma
    for(i = 0;i < l;i++){
        int notas_aluno = 0;
        for(j = 0;j < c;j++){
            notas_aluno += mat[i][j];
        }
        todas_as_notas += notas_aluno;
        media_aluno[i] = (float) notas_aluno / c;
    }

    // Exibe média do aluno
    for(i = 0;i < l;i++){
        printf("Aluno %d, media: %2.1f\n", i+1, media_aluno[i]);
    }

    // Exibe média da turma
    media_turma = (float) todas_as_notas / l;
    printf("\nMedia da turma: %2.1f", media_turma);

}
