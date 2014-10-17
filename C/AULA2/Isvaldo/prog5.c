#include <stdio.h>

/* 5. Faça um algoritmo que leia três números e mostre-os em ordem crescente.*/

main () {
int n1,n2,n3,maior,meio,menor;
printf("\nInforme 3 Numeros: \n");
scanf("%d%d%d",&n1,&n2,&n3);
if (n1>n2){
        if (n1>n3){
            maior = n1;
            meio = n2>n3? n2:n3;
            menor = n2<n3? n2:n3;
        }else{
            maior = n3;
            meio = n1>n2? n1:n2;
            menor = n1<n2? n1:n2;
        }
}else{

    if (n2>n3){
            maior = n2;
            meio = n1>n3? n1:n3;
            menor = n2<n3? n2:n3;
        }else{
            maior = n3;
            meio = n1>n2? n1:n2;
            menor = n1<n2? n1:n2;
        }
}
printf("\n %d%d%d",menor,meio,maior);

}
