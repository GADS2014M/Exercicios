// Estruturas de Decisão

#include <stdio.h> // Entrada e saida
#include <locale.h> // Caracteres especiais

main() {

    setlocale(LC_ALL,""); // Caracteres especiais

    // Declaração de variáveis
    int numero;

    printf("Entre com um número: ");
    scanf("%d", &numero);


    if (numero %2 == 0){
        printf("O número digitado é PAR \n");
    } else {
        printf("O número digitado é IMPAR \n");
    }

}
