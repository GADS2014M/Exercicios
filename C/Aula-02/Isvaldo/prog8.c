#include <stdio.h>

/*8. Os endereços IP versão 4 são divididos em cinco classes: A, B, C, D e E.
Os endereços no intervalo de 0 à 127 são classe A, de 128 à 191 são classe B,
de 192 à 223 são classe C, de 224 à 239 são classe D e a partir de 240 são classe E.
Faça um algoritmo que leia o primeiro octeto, no formato decimal, de um endereço IP e informe a sua classe.*/

main () {
int octeto;
char classe;
printf("informe o octeto: ");
scanf("%d",&octeto);
if (octeto>0 && octeto<=127)
    classe = 'A';

if (octeto>127 && octeto<=191)
    classe = 'B';

if (octeto>191 && octeto<=223)
    classe = 'C';

if (octeto>223 && octeto<=239)
    classe = 'D';

if (octeto>=240)
    classe = 'E';

printf("Ip pertence a classe %c",classe);
}
