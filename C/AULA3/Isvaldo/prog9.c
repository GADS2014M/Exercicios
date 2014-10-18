#include <stdio.h>

/*Uma progressão aritmética é uma sequência numérica em que cada termo, a partir do segundo,
 *é igual a soma do termo anterior com uma constante. A constante é calculada como sendo
 *a diferença entre o segundo e o primeiro número. Faça um algoritmo que receba dois números
 *inteiros e, a partir dessa informação, gere uma sequência em progressão aritmética.
 */

main() {
int primeiro,segundo,termo=0,constante,i;

puts("informe o Primeiro numero: ");
scanf("%d",&primeiro);
puts("informe o Segundo numero: ");
scanf("%d",&segundo);
constante = segundo - primeiro;
printf("######## PA com const = %d ##########\n",constante);
for (i=0;i<10;i++){
    printf("->  %d\n",termo);
    termo =termo +constante;

}




}
