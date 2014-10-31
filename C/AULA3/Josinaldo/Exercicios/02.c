#include <stdio.h>

main() {

    /*
        2.	Faça um algoritmo que calcule a soma dos números de 1 a 100.
    */
    int resultado, num = 1, cont;

    for (cont = 1 ; cont <= 100 ; cont++){

        resultado = num + cont;

        printf("%d+%d = %d \n", num,cont,resultado);

    }

}
