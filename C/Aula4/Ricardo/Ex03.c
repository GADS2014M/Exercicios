#include <stdio.h>


main(){
    int vet[5]={0},aux,i=0;


    for(i =0; i < 5; i++)
        {
            scanf("%d", &aux);
            if(aux ==0)
                {
                    break;
                }
                vet[i]=aux;
        }
        for (i=4;i>-1;i--)
        {
            if(vet[i] !=0){
            printf("%d\n",vet[i]);}
        }
}

