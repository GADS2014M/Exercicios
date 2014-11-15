#include <stdio.h>

main(){

    //int vet[10] = {0};
    int vet[10] = {1,2,3,4,5,6,7,8,9,10};
    int *p = vet;
    int i;

    printf("Endereco de vet[0] = %p\n", &vet[0]);
    printf("Endereco de vet    = %p\n", vet);
    printf("Conteudo de vet[0] = %d\n", vet[0]); // Conteudo de vet
    printf("Conteudo de vet[0] = %d\n\n", *vet); // (*)vet = pegar o que esta sendo apontado pelo ponteiro

    /*
    p++;
    printf("Conteudo de vet[1] = %d\n", *p);// (*)p = pegar o que esta sendo apontado pelo ponteiro
    */

    for(i = 0; i < 10; i++){
        printf("Conteudo de vet[%d] = %d\n", i, *p);
        p++;
    }
}
