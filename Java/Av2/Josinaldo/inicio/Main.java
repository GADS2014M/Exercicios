package com.formula1.inicio;

import java.util.Scanner;

import com.formula1.garagem.Equipe;
import com.formula1.garagem.corrida.*;


public class Main {

	/**
	 * @author Josinaldo Albuquerque Barbosa
	 */
	public static void main(String[] args) {
		
		/* Inicia */
		
		// Cria vetor do tipo Piloto
		Piloto piloto[] = new Piloto[2];
		
		// Cadastra Pilotos
		piloto[0] = Piloto.cadastraPiloto(0, "Pica pau", 39, "Argentino", 15);
		piloto[1] = Piloto.cadastraPiloto(1, "Papaleguas", 50, "Africano", 81);
		
		// Cria vetor do tipo Carro
		Carro carro[] = new Carro[2];
		
		// Cadastra Carros
		carro[0] = Carro.cadastraCarro("ADWDS1357", "LK-575120", "Michelim", "Aqua Pura");
		carro[1] = Carro.cadastraCarro("HGUSDE550", "TA-144793", "Anda Rápido", "Óleo de Cozinha");
		
		// Instancia equipe
		Equipe equipe = new Equipe();
		
		// Cadastra equipe
		equipe.cadastraEquipe("Ferrari", "10/10/1985", "México");
		
		// Cadastra carro na equipe
		equipe.cadastraCarroEquipe(carro[0], 0);
		equipe.cadastraCarroEquipe(carro[1], 1);
		
		
		// Vincula um Carro a um Piloto pelo ID
		//				   [piloto | carro]
		equipe.pilotoRecebeCarro(0 , 0);
		equipe.pilotoRecebeCarro(1 , 1);
		
		// Cadastra piloto na equipe
		equipe.cadastraPilotoEquipe(piloto[0], 0);
		equipe.cadastraPilotoEquipe(piloto[1], 1);
		
		// Instanciar scanner
		Scanner input = new Scanner(System.in);
		
		
		/* Exibe */
		
		// Exibe piloto com maior número de vitórias
		int maisVitorioso = equipe.imprimeMaisVitorioso();
		
		// Atribui uma vitória ao piloto com mais vitórias
		equipe.adicionaVitoria(maisVitorioso);
		
		// Trocar os carros entre os pilotos
		equipe.trocaCarro(0, 1);
		
		System.out.println();
		
		// Exibe piloto com maior número de vitórias
		equipe.imprimeMaisVitorioso();
		
	}

}
