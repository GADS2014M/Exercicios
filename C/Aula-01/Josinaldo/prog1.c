/*

- C não tem "nada", so adicionar as bibliotecas para determinada função
- Tipos de variáveis que vamos usar nesse curso: int(inteiro), float(real), char(caracter)
- \n = Quebra a linha
- .1, 3.14 = 3.1, 3.15 = 3.2
- system("PAUSE"); - para pausar(caso execute o prog1.exe).

Como funciona?

    -   prog1.c <- Arquivo fonte
    -   <- pré compilador (Adiciona biblioteca, define as constantes e etc..)
    -   <- compilador GCC (compila)
    -   prog1.o <- Arquivo objeto
    -   <- luker
    -   prog1.exe

*/

//Declara as bibliotecas
#include <stdio.h> // Entrada e saida
#include <math.h> // funções para calcular potências, raíz quadrada, funções trigonométricas para cálculos que envolvem seno, co-seno e tangente, além de constantes para números irracionais como, por exemplo, PI (Π) e √2.

main(){

    // Declara variáveis e atribui valores a mesma, OBS: diferente de outras IDE's as variáveis começam com valor indeterminado.
    //int i = 13;
    //float f = 3.14;
    //char c = 'a';
    const float PI = 3.14;
    int i;
    float f;
    char c;

    // Pede para que o usuario digite: scanf()
    printf("Entre com um inteiro: ");
    scanf("%d", &i);
    printf("Entre com um real: ");
    scanf("%f", &f);
    printf("Entre com um caractere: ");
    // para apagar o enter com fflush(stdin);, so acontece com caracter porque ele ler o enter do ultimo digitado
    fflush(stdin);
    scanf("%c", &c);

    printf("\n Ola mundo! \n");

    printf("\n i = %d \n", i);
    // %d = inteiro
    printf("\n f = %.2f \n", f);
    // %f = real
    printf("\n c = %c \n", c);
    // %d = caracter
    printf("\n PI = %f \n", M_PI);
    // Exibe PI

    // Descobrindo o endereço hexadecimal das variáveis
    printf("\n Endereco de i = %p", &i);
    printf("\n Endereco de f = %p", &f);
    printf("\n Endereco de c = %p \n", &c);
    // %p = ponteiros

}
