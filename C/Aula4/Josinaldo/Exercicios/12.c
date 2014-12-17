#include <stdio.h>
#include <limits.h>

const int total_alunos = 6, total_notas = 3;

main(){

/*
    12.	Faça um programa que processe as informações abaixo, sendo que cada linha representa um aluno e cada coluna as suas notas.
    O programa deverá mostrar a média de cada aluno, com seu nome, e a média da turma. Além disso, o programa deverá mostrar o melhor aluno da turma.
        Luiz      5  7  4
        Paulo     5  6  7
        Maria     3  5  2
        Luiza     4  5  6
        Felipe    8  9  7
        Fabiana   2  6  4
*/

    int notas[6][3] = {{5,7,4},{5,6,7},{3,5,2},{4,5,6},{8,9,7},{2,6,4}};
    char nomes[6][255] = {"Luiz","Paulo","Maria","Luiza","Felipe","Fabiana"};
    int i, j, melhor_aluno_id;
    float media_aluno, media_turma = 0, melhor_aluno_nota = INT_MIN;

    for(i = 0;i < total_alunos;i++){
        media_aluno = 0;
        for(j = 0;j < total_notas;j++){
            media_aluno += notas[i][j];
        }

        media_turma += media_aluno;
        media_aluno = media_aluno / total_notas;
        printf("Nome: %s\nMedia: %2.1f\n", nomes[i], media_aluno);

        // Pega o index do melhor aluno
        if(media_aluno > melhor_aluno_nota){
            melhor_aluno_nota = media_aluno;
            melhor_aluno_id   = i;
        }
    }

    media_turma = media_turma / total_alunos;
    printf("\nMedia da turma: %2.1f\n", media_turma);
    printf("Melhor aluno da turma: %s, com %2.1f de media", nomes[melhor_aluno_id], melhor_aluno_nota);

}
