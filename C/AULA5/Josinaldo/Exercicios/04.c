#include <stdio.h>
#include <string.h>

/*
    4. Faça um programa que leia um nome no formato “nome sobrenome” e mostre apenas o “nome”.
*/

main(){

    char nome_completo  [100];
    char nome           [50];
    char sobrenome      [50];
    int i = 0;

    puts("Por favor, digite nome e sobrenome: ");
    gets(nome_completo);

    // Pega nome
    while((nome_completo[i] != ' ') && (nome_completo[i] != '\0')){
        nome[i] = nome_completo[i];
        i++;
    }
    nome[i] = '\0';

    printf("Nome: %s", nome);

}
