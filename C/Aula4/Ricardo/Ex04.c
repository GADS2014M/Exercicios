#include <stdio.h>


main(){
        int vet[20]={0};
        int i;
        int aux;
        int cont=0;
        float media=0;

        printf("Digite o numero seguinte, maximo 20\n");
        for(i=0;i<20;i++)
            {
                scanf("%d", &aux);
                if (aux==0){
                    break;}
                vet[i]=aux;
                cont++;
                media=media+vet[i];
            }
            media=media/cont;
            for (i=0;i<cont-1;i++){
                if (vet[i]>=media)
                {
                    printf("%d", vet[i]);
                    printf("\n");
                }


            }
        }
