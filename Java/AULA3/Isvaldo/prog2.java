/*
* Declarar um vetor de 20 posições ALEATORIAS com valores entre 1 e 1000. Percorrer o 
* vetor indicando, para um determinado elemento, se ele é múltiplo de 2, 3,
* 5 ou 7.
 */
 

import java.util.Random;
public class prog2 {
	
public static void main(String[] args) {
	
	int[] numeros = new int[20];
	Random rand = new Random();
	
	for(int i=0;i<20;i++) 
		numeros[i] = rand.nextInt(999)+1; // no caso 0, ele soma + 1 e vira 1, no caso 999 soma + 1 e vira 1000
		
	for (int item:numeros) {
		if (item % 2 == 0)
		System.out.printf("%d e divisivel por 2 \n",item);
		else if (item % 3 == 0)
		System.out.printf("%d e divisivel por 3 \n",item);
		else if (item % 5 == 0)
		System.out.printf("%d e divisivel por 5 \n",item);
		else if (item % 7 == 0)
		System.out.printf("%d e divisivel por 7 \n",item);
	}
}
	
}
