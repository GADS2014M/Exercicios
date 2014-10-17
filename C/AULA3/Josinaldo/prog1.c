#include <stdio.h>

main() {

    int i, n, n1, n2;
    float media;

    printf("Por favor, entre com o numero de alunos: ");
    scanf("%d", &n);
    printf("\n");

    for (i = 1; i <= n; i++) {
        printf("Entre com a nota n1: ");
        scanf("%d", &n1);

        printf("Entre com a nota n2: ");
        scanf("%d", &n2);

        media = (n1 * 0.3) + (n2 * 0.7);

        printf("Media = %.1f\n", media);

        if (media >= 60)
            printf("Aluno aprovado\n\n-");
        else
            printf("Aluno em prova final\n\n");
    }

}
