// Estruturas de Decis�o

#include <stdio.h> // Entrada e saida
#include <locale.h> // Caracteres especiais

main() {

    setlocale(LC_ALL,""); // Caracteres especiais

    // Declara��o de vari�veis
    int n1, n2;

    printf("Entre com o primeiro n�mero: ");
    scanf("%d", &n1);
    printf("Entre com o segundo n�mero: ");
    scanf("%d", &n2);

    if (n1 > n2){
        printf("%d � maior que %d", n1,n2);
    } else {
        printf("%d � maior que %d", n2,n1);
    }

}

