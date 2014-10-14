/**
 *  @author vinicius.bianchi
 *
 *	Declarar um vetor de 20 posições com valores entre 1 e 1000. Percorrer o 
 *	vetor indicando, para um determinado elemento, se ele é múltiplo de 2, 3,
 *	5 ou 7.
 *	Modificar o programa para inicializar o vetor com números aleatórios.
 * 
 * */

import java.util.Scanner;
import java.util.Random; //Biblioteca que usarei para gerar o número aleatório conforme solicitado
public class Vetores {

	public static void main(String[] args) {
		Scanner armazenaNum = new Scanner(System.in);
		Random numeroAleatorio = new Random();
		
		//Declarando o vetor de 20 posições
		int[] Vet = new int[19];
		
		for (int cont: Vet){
			
			//Gerando numeros aleatórios entre 1 e 1000 e armazenando no vet de 20 posições
			Vet[cont] = numeroAleatorio.nextInt(1000)+1; 
			
			if (Vet[cont] % 2 == 0){
				System.out.println(Vet[cont] + " é múltiplo de 2!");
			}
			else if (Vet[cont] % 3 == 0 ){
				System.out.println(Vet[cont] + " é múltiplo de 3!");
			}
			else if (Vet[cont] % 5 == 0){
				System.out.println(Vet[cont] + " é múltiplo de 5!");
			}
			else if (Vet[cont] % 7 == 0){
				System.out.println(Vet[cont] + " é múltiplo de 7!");
			}
		}
		
	}

}
