#include <stdio.h>
#include <string.h>

/*
    3. Faça um programa que leia uma data no formato dia/mês/ano e mostre o dia, mês e ano separadamente. Por exemplo, se for digitado 13/03/1963 mostre dia 13, mês 03 e ano 1963.
*/

// Tamanho da data
const int t_data = 10;

main(){

    char data[t_data+1];
    char dia[3], mes[3], ano[5];
    int i = 0,
        j = 0;

    puts("Por favor digite uma data, ex: 15/03/1990");
    gets(data);

    // Pega dia

    // Pega mês

    // Pega ano

    printf("Dia: %s\nMes: %s\nAno: %s", dia, mes, ano);
}
