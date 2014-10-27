#include <stdio.h>


main(){
    int vet1[] = {10,20,30,40,50,60,70,80};
    int vet2[7],i;

    for (i = 0; i < 9; i++)
        {
            vet2[i] = vet1[i];
        }
    for (i = 7; i > -1; i--)
        {
            printf("%d ", vet2[i]);
        }
}
