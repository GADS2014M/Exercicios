#include <stdio.h>
#include <string.h>

/*
    5. Faça um programa que leia um nome no formato “nome sobrenome” e mostre apenas o “sobrenome”.
*/

main(){

    char nome_completo  [100];
    char nome           [50];
    char sobrenome      [50];
    int i = 0, j = 0;

    puts("Por favor, digite nome e sobrenome: ");
    gets(nome_completo);

    // Pega nome
    while((nome_completo[i] != ' ') && (nome_completo[i] != '\0')){
        nome[i] = nome_completo[i];
        i++;
    }

    // Pra pular o espaço
    i++;

    // Pega sobrenome
    while(nome_completo[i] != '\0'){
        sobrenome[j] = nome_completo[i];
        j++;
        i++;
    }

    nome[i] = '\0';
    sobrenome[j] = '\0';

    printf("Sobre nome: %s", sobrenome);

}
