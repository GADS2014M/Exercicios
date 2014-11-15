#include <stdio.h>

main(){

    // (&) pega o endereço de memória

    int x = 1;
    int *p = NULL;

    printf("Valor de x = %d\n", x);
    printf("Endereco de x = %p\n", &x);
    //p = &x; // Endereço de x no ponteiro p
    printf("Valor de p = %p\n", p);
    printf("Endereco de p = %p", &p);

}
