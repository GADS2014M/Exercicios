#include <stdio.h>

/*
    5. Faça um programa que processe a matriz abaixo, sendo que cada linha representa
    um aluno e cada coluna as suas notas. O programa deverá mostrar a média de
    cada aluno e a média da turma. Implemente dois procedimentos. Implemente, pelo
    menos, dois procedimentos.
    5 7 4
    5 6 7
    3 5 2
    4 5 6
    8 9 7
    2 6 4
*/

const int linhas  = 6;
const int colunas = 3;

void mediaAluno(int mat[][colunas]){
    int i, j;
    float mediaAluno;
    for(i=0;i < linhas;i++){
        mediaAluno = 0;
        float mediaAluno = 0;
        for(j=0;j < colunas;j++){
            mediaAluno += mat[i][j];
        }
        mediaAluno = (float) mediaAluno / colunas;
        printf("Aluno %d, media = %2.1f\n", i+1, mediaAluno);
    }
}

void mediaTurma(int mat[][colunas]){
    int i, j;
    float notasAluno, mediaTurma = 0;
    for(i=0;i < linhas;i++){
        notasAluno = 0;
        for(j=0;j < colunas;j++){
            notasAluno += mat[i][j];
        }
        mediaTurma += notasAluno;
    }
    mediaTurma = (float) mediaTurma / linhas;
    printf("Media da turma = %2.1f", mediaTurma);
}

main(){

    int mat[6][3] = {{5,7,4},{5,6,7},{3,5,2},{4,5,6},{8,9,7},{2,6,4}};

    // Calcula e exibe média Aluno
    mediaAluno(mat);

    // Calcula e exibe média da turma
    mediaTurma(mat);

}
