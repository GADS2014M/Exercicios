#include <stdio.h>
#include <string.h>

/*
    8. Faça um programa que leia uma string e verifique se a mesma é um palíndrome, isto é, da esquerda para direita ou da direita para a esquerda
       têm-se a mesma seqüência de caracteres. Exemplos: ama, ovo, asa.
*/

main() {
	char palavra[20];
    int i = 0, j, pali = 1;

    printf("Entre com uma palavra: ");
	gets(palavra);
	j = strlen(palavra) - 1;
	while ((i < j) && (pali)) {
        if (palavra[i] != palavra[j])
            pali = 0;
        else {
            i++;
            j--;
        }
	}
    if (pali)
        printf("A palavra e palindrome\n");
    else
        printf("A palavra nao e palindrome\n");
}
