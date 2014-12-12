#include <stdio.h>

/*
    3.	Faça um programa que leia um número e verifique se o mesmo se encontra no vetor {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}.
    Implemente uma função que receba o vetor e o número procurado e retorne se achou ou não.
*/

const int tamanho_vetor = 10;

int verifica(int vetor[]){
    int num, i;
    printf("Digite o numero: ");
    scanf("%d", &num);
    for(i = 0;i < tamanho_vetor;i++){
        if(num == vetor[i])
            return 1;
    }
    return 0;
}

main(){

    int vetor[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int resultado = verifica(vetor);

    switch (resultado){
        case 0:
            printf("\nNao achou :(");
            break;
        case 1:
            printf("\nAchou! :)");
            break;
        default:
            printf("\nErro");
            break;
    }

}
