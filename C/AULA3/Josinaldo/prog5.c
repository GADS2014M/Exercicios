#include <stdio.h>
#include <windows.h>

main() {

    int opcao;

    void mostramenu()
    {
        system("CLS");
        printf("1 - Incluir\n");
        printf("2 - Alterar\n");
        printf("3 - Excluir\n");
        printf("4 - Listar\n");
        printf("5 - Finalizar\n");
    }

    do {
        mostramenu();
        printf("Entre com uma opcao valida: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: // Incluir;
                break;
            case 2: // Alterar;
                break;
            case 3: // Excluir;
                break;
            case 4: // Listar;
                break;
            case 5: // Finalizar;
                break;
            default :
                printf("\nErro opcao invalida\n");
                system("PAUSE");
                system("CLS");
        }

    } while (opcao != 5);

}
