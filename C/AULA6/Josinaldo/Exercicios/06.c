#include <stdio.h>
#include <string.h>

/*
    6.	Faça um programa que processe as informações abaixo, sendo que cada linha representa um aluno e cada coluna as suas notas.
        O programa deverá mostrar a média de cada aluno, com seu nome, e a média da turma
        Além disso, o programa deverá mostrar o melhor aluno da turma. Implemente, pelo menos, dois procedimentos.
        Luiz     5  7  4
        Paulo    5  6  7
        Maria    3  5  2
        Luiza    4  5  6
        Felipe   8  9  7
        Fabiana  2  6  4

*/

const int linhas   = 6;
const int colunas  = 3;
const int max_nome = 50;

void mediaAluno(char *alunos[][50], int mat[][colunas]){
    int i, j;
    float mediaAluno;
    for(i=0;i < linhas;i++){
        mediaAluno = 0;
        float mediaAluno = 0;
        for(j=0;j < colunas;j++){
            mediaAluno += mat[i][j];
        }
        mediaAluno = (float) mediaAluno / colunas;
        printf("%s, media = %2.1f\n", alunos[i], mediaAluno);
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

    // Matriz alunos
    char alunos[6][50] = {"Luiz", "Paulo", "Maria", "Luiza", "Felipe", "Fabiana"};

    // Matriz de notas
    int mat[6][3] = {{5,7,4},{5,6,7},{3,5,2},{4,5,6},{8,9,7},{2,6,4}};

    // Calcula e exibe nome e média do aluno
    mediaAluno(&alunos, mat);

    // Calcula e exibe média da turma
    mediaTurma(mat);

}
