// Estruturas de Decis�o

#include <stdio.h> // Entrada e saida
#include <locale.h> // Caracteres especiais

main() {

    setlocale(LC_ALL,""); // Caracteres especiais

    // Declara��o de vari�veis
    int numero;

    printf("Entre com um n�mero: ");
    scanf("%d", &numero);

    if (numero < 0){
        printf("O n�mero digitado � NEGATIVO \n");
    }
    else if (numero > 0) {
            printf("O n�mero digitado � POSITIVO \n");
    }
    else {
        printf("O n�mero digitado � IGUAL a 0 \n");
}

}
