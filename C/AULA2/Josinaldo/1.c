// Estruturas de Decisão

#include <stdio.h> // Entrada e saida
#include <locale.h> // Caracteres especiais

main() {

    setlocale(LC_ALL,""); // Caracteres especiais

    // Declaração de variáveis
    int numero;

    printf("Entre com um número: ");
    scanf("%d", &numero);

    if (numero < 0){
        printf("O número digitado é NEGATIVO \n");
    }
    else if (numero > 0) {
            printf("O número digitado é POSITIVO \n");
    }
    else {
        printf("O número digitado é IGUAL a 0 \n");
}

}
