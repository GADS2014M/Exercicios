#include <stdio.h>

main(){

    /*
        6. Faça um programa que leia um número e verifique se o mesmo se encontra no vetor
        {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}.
    */

    int i, verifica, resposta = 0, vet[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    printf("Por favor, digite um numero: ");
    scanf(" %d", &verifica);

    for(i=0;i<=9;i++){
        if(vet[i] == verifica)
            resposta++;
    }

    if(resposta >= 1){
        printf("Encontra-se no vetor.");
    }else{
        printf("Nao se encontra no vetor.");
    }

}
