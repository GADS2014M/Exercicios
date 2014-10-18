/*
* Declarar um vetor de 20 posições com valores entre 1 e 1000. Percorrer o 
* vetor indicando, para um determinado elemento, se ele é múltiplo de 2, 3,
* 5 ou 7.
 */

public class prog1 {
	
public static void main(String[] args) {
	
	int[] numeros = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	
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
