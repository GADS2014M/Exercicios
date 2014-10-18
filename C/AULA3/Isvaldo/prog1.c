#include <stdio.h>

#define FALSE 0
#define TRUE 1
/*
*Faça um algoritmo que leia uma sequência de caracteres
*terminada por um ponto e mostre o numero de vogais da frase.
*/


// Essa função testa se é vogal usando Switch
int eVogal(char letra) {
    switch(letra){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            return TRUE;
            break;
        default:
            return FALSE;
            break;
            }
}

main () {

char c;
// count é o controle de vogais
int count=0;
// Puts  e interessante usar quando não tem variaveis ou \n
puts("Digite uma sequencia de caracteres: ");
c = getchar();
// e montando um loop  até encontrar '.'
while(c !='.'){
    if (eVogal(c)) {
        count++;
    }
    c = getchar();
}
// apos o loop mostramos quantas vogais foram contadas
printf("Você digitou um total de %d vogais",count);

}
