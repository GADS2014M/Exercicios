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

    //Não consegui fazer a ordem mas estudei esse codigo
    if (n1 <= n2 && n2 <= n3) {
        printf("A ordem crescente: %d %d %d\n", n1, n2, n3);
    } else if (n1 <= n3 && n3 <= n2) {
      printf("A ordem crescente: %d %d %d\n", n1, n3, n2);
    } else if (n2 <= n1 && n1 <= n3) {
      printf("A ordem crescente: %d %d %d\n", n2, n1, n3);
    } else if (n2 <= n3 && n3 <= n1) {
      printf("A ordem crescente: %d %d %d\n", n2, n3, n1);
    } else if (n3 <= n1 && n1 <= n2) {
      printf("A ordem crescente: %d %d %d\n", n3, n1, n2);
    } else {
      printf("A ordem crescente: %d %d %d\n", n3, n2, n1);
    }

}

