#include <stdio.h>

main() {

    int n1, n2, cont = 0;
    float media, mediatot = 0;

    printf("Entre com a nota n1: ");
    scanf("%d", &n1);

    while (n1 >= 0) {
        printf("Entre com a nota n2: ");
        scanf("%d", &n2);
        media = (n1 * 0.3) + (n2 * 0.7);
        printf("Media = %.1f\n", media);
        if (media >= 60)
            printf("Aluno aprovado\n");
        else
            printf("Aluno em prova final\n");
            mediatot = mediatot + media;
            cont++;
            printf("Entre com a nota n1: ");
            scanf("%d", &n1);
        }
        if (cont > 0) {
            mediatot = mediatot / cont;
            printf("\nMedia da turma = %.1f\n", mediatot);
        }
        else
            printf("Nao ha alunos a serem processados");
}
