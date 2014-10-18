// Estruturas de Decisão

#include <stdio.h> // Entrada e saida
#include <locale.h> // Caracteres especiais

main() {

    setlocale(LC_ALL,""); // Caracteres especiais

    // Declaração de variáveis
    int n1, n2;

    printf("Entre com o primeiro número: ");
    scanf("%d", &n1);
    printf("Entre com o segundo número: ");
    scanf("%d", &n2);

    if (n1 > n2){
        printf("%d é maior que %d", n1,n2);
    } else {
        printf("%d é maior que %d", n2,n1);
    }

}

