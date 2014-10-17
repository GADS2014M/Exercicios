#include <stdio.h>
#include <windows.h>
#include <locale.h>

void mostramenu()
{
    system("CLS");
    printf("1- Incluir\n");
    printf("2- Alterar\n");
    printf("3- Excluir\n");
    printf("4- Listar\n");
    printf("5- Finalizar\n");

}

main ()
{
    setlocale(LC_ALL,"");

    int opcao;

    do
    {
        mostramenu();
        printf("Entre com uma opção válida: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        default:
            printf("\nErro! Opção inválida!\n");
            system("PAUSE");
        }
    }
    while (opcao != 5);

}
