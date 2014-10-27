#include <stdio.h>


main(){
    int vet1[] = {1,2,3,4,5,6,7,8};
    int vet2[] = {10,20,30,40,50,60,70,80};
    int vet3[8],i;

    for(i = 0; i < 8; i++)
        {
            vet3[i] = vet1[i] + vet2[i];
        }
    for(i = 0; i < 8; i++)
        {
            printf("%d \n",vet3[i]);
        }
}
