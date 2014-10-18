// Estruturas de Decisão

#include <stdio.h> // Entrada e saida
#include <locale.h> // Caracteres especiais

main() {

    setlocale(LC_ALL,""); // Caracteres especiais

    // Declaração de variáveis
    char car;

    printf("Entre com um caractere: ");
    scanf("%c", &car);

    switch (car) {
        case 'a':
            printf("Vogal a \n");
            break;
        case 'e':
            printf("Vogal e \n");
            break;
        case 'i':
            printf("Vogal i \n");
            break;
        case 'o':
            printf("Vogal o \n");
            break;
        case 'u':
            printf("Vogal u \n");
            break;
        default:
            printf("Não é vogal \n");
    }

}
