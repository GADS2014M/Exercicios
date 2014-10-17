#include <stdio.h>
#include <windows.h>
#include <locale.h>

main ()
{
    setlocale(LC_ALL,"");

    int n1, n2, cont = 0;
    float media, mediaTotal = 0;

    printf("entre com a nota n1: ");
    scanf("%d", &n1);

    while (n1 >= 0)
   {
       printf("entre com a nota n2: ");
       scanf("%d", &n2);

       media = (n1 * 0.3) + (n2 * 0.7);
       printf("media = %.1f\n", media);

       if (media >= 60)
       {
           printf("Aluno aprovado!\n");
       }
       else
       {
           printf("Aluno em prova final!\n");
       }
       mediaTotal = mediaTotal + media;
       cont++;
       printf("entre com a nota n1: ");
       scanf("%d", &n1);
   }
   mediaTotal = mediaTotal / cont;
   printf("\nMedia da turma = %.1f\n", mediaTotal);

   system("PAUSE");
}
