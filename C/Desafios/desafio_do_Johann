#include <stdio.h>
#include <time.h>
#include <locale.h>

/*
    author: Josinaldo Albuquerque Barbosa
        "Desafio: Criar um algoritmo que pegue um número X e coloque o valor de 1 a X em uma ordem aleatória sem repetir nenhum número.
         Como não se professor podem fazer do jeito que quiser com vetor, sem vetor de qualquer forma.X pode ser uma constante." - Johann Monteiro
         (Tá meio confuso isso ai, mas vamos lá...)
*/

// Valor máximo do vetor(só inteiros)[PODE SER ALTERADO]
const int max_x = 20;

// Valor mínimo do X
const int min_x = 2;

// Pede ao usuário um valor para o X
int pega_valor(int X){
    printf("Por favor, digite um valor INTEIRO(entre %d a %d)\n", min_x, max_x);
    do{
        printf("Valor de X: ");
        scanf("%d", &X);
    }while(valida_inteiro(X) == 0);
    return X;
}

int valida_inteiro(int X){
    if(X >= min_x && X <= max_x){
        return 1;
    }else{
        printf("Valor errado, digite novamente.\n");
        return 0;
    }
}

void preeche_vetor(int vetor[], int X){
    int i, indice_R, vazio = -1;

    printf("\n[Processando...]");

    // Todos do vetor ira receber o int vazio para poder comparar se já recebeu um valor
    for(i = 0;i < X;i++){
        vetor[i] = vazio;
    }

    // Preeche o vetor de 1 até o valor de X
    for(i = 0;i < X;i++){
        // indice aleatório (entre 0 e X -1)
        indice_R = indice_aleatorio(indice_R, X);
        // verifica se o indice já recebeu um valor
        while(vetor[indice_R] != vazio){
            // indice do vetor já tem um valor, procurar outro indice
            /* OBS: como o indice é aleatorio pode cair no mesmo, o que torna o programa muito lento */
            indice_R = indice_aleatorio(indice_R, X);
        }
        // vetor igual a zero recebe o valor
        vetor[indice_R] = i + 1;
    }
}

int indice_aleatorio(int indice_R, int X){
    // Valor pseudo aleatório(semente é o time)
    srand( (unsigned)time(NULL) );
    // valores entre 0 e X
    indice_R = rand() % X;
    return indice_R;
}

void exibe_vetor(int vetor[], int X){
    int i;
    printf("\n\n------------------\n");
    for(i = 0;i < X;i++){
        printf("%dº = %d\n", i+1, vetor[i]);
    }
    printf("------------------");
}

main(){

    // Habilita a acentuação para o português
    setlocale(LC_ALL, "Portuguese");

    int vetor[max_x];
    int X;

    // Pega valor para X
    X = pega_valor(X);

    // Preeche o vetor em ordem aleatória(sem repetir o mesmo número)
    preeche_vetor(vetor, X);

    // Exibe o vetor
    exibe_vetor(vetor, X);

}
