// Estruturas de Decis�o

#include <stdio.h> // Entrada e saida
#include <locale.h> // Caracteres especiais

main() {

    setlocale(LC_ALL,""); // Caracteres especiais

    // Declara��o de vari�veis
    int numero;

    printf("Entre com um n�mero: ");
    scanf("%d", &numero);


    if (numero %2 == 0){
        printf("O n�mero digitado � PAR \n");
    } else {
        printf("O n�mero digitado � IMPAR \n");
    }

}
