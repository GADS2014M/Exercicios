// Estruturas de Decis�o

#include <stdio.h> // Entrada e saida
#include <locale.h> // Caracteres especiais

main() {

    setlocale(LC_ALL,""); // Caracteres especiais

    // Declara��o de vari�veis
    int n1, n2, n3;

    printf("Por favor digite os 3 n�meros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if ((n1 > n2) && (n1 > n3)) {
        printf("O Primeiro [ %d ] � maior que o segundo [ %d ] e terceiro [ %d ] \n", n1, n2, n3);
    } else if ((n2 > n1) && (n2 > n3)) {
        printf("O Segundo [ %d ] � maior que o primeiro [ %d ] e terceiro [ %d ] \n", n2, n1, n3);
    } else if ((n3 > n1)&&(n3 > n2)) {
        printf("O terceiro [ %d ] � maior que o primeiro [ %d ] e segundo [ %d ] \n", n3, n1, n2);
    } else {
        printf("O primeiro [ %d ], o segundo [ %d ] e terceiro [ %d ] s�o iguais \n", n3, n1, n2);
    }

    //N�o consegui fazer a ordem mas estudei esse codigo
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

