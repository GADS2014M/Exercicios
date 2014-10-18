// Estruturas de Decisão

#include <stdio.h> // Entrada e saida
#include <locale.h> // Caracteres especiais

main() {

    setlocale(LC_ALL,""); // Caracteres especiais

    // Declaração de variáveis
    int n1, n2, n3;

    printf("Por favor digite os 3 números: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if ((n1 > n2) && (n1 > n3)) {
        printf("O Primeiro [ %d ] é maior que o segundo [ %d ] e terceiro [ %d ] \n", n1, n2, n3);
    } else if ((n2 > n1) && (n2 > n3)) {
        printf("O Segundo [ %d ] é maior que o primeiro [ %d ] e terceiro [ %d ] \n", n2, n1, n3);
    } else if ((n3 > n1)&&(n3 > n2)) {
        printf("O terceiro [ %d ] é maior que o primeiro [ %d ] e segundo [ %d ] \n", n3, n1, n2);
    } else {
        printf("O primeiro [ %d ], o segundo [ %d ] e terceiro [ %d ] são iguais \n", n3, n1, n2);
    }

}

