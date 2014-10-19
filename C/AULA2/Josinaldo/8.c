#include <stdio.h> // Entrada e saida
#include <locale.h> // Caracteres especiais

main (){

    setlocale(LC_ALL,""); // Caracteres especiais

    // Variáveis
    int octeto;

    printf("\n [ ------------------- Verificador de classes de IP ------------------- ] \n");

    // Solicita o octeto
    printf("\n Por favor, digite o primeiro octeto de seu IP: ");
    scanf("%d", &octeto);

    // Verifica sua classe e exibe
    if (octeto < 0){
        printf("\n Por favor, digite um número válido! \n");
    } else if (octeto >= 0 && octeto <= 127){
        printf("\n Seu octeto %d é Classe A \n", octeto);
    } else if (octeto >= 128 && octeto <= 191){
        printf("\n Seu octeto %d é Classe B \n", octeto);
    } else if (octeto >= 192 && octeto <= 223){
        printf("\n Seu octeto %d é Classe C \n", octeto);
    } else if (octeto >= 224 && octeto <= 239){
        printf("\n Seu octeto %d é Classe D \n", octeto);
    } else {
        printf("\n Seu octeto %d é Classe E \n", octeto);
    }

    printf("\n [ -------------------------------------------------------------------- ] \n");

}
