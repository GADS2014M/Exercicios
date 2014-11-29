package com.formula1.garagem;

import com.formula1.garagem.corrida.Carro;
import com.formula1.garagem.corrida.Piloto;

public class Equipe {
	// Private para proteger e ser acessado somente por esta classe
	private String nome;
	private String dataFundacao;
	private String pais;
	private Piloto listaPiloto	[] = new Piloto[2];
	private Carro  listaCarro 	[] = new Carro[2];
	private int	   carroDoPiloto[] = new int[2];
	
	// Public para ser acessador de qualquer lugar do projeto
	public Equipe cadastraEquipe(String nome, String dataFundacao, String pais){
		Equipe equipe = new Equipe();
		equipe.setNome(nome);
		equipe.setDataFundacao(dataFundacao);
		equipe.setPais(pais);
		return equipe;
	}
	
	// Cadastra piloto na equipe
	public Piloto cadastraPilotoEquipe(Piloto piloto, int indice){
		return this.listaPiloto[indice] = piloto;
	}
	
	// Cadastra carro na equipe
	public Carro cadastraCarroEquipe(Carro carro, int indice){
		return this.listaCarro[indice] = carro;
	}
	
	// Designa um Carro a um Piloto
	public void pilotoRecebeCarro(int idPiloto, int idCarro){
		this.carroDoPiloto[idPiloto] = idCarro;
	}
	
	// Troca carros entre os pilotos
	public void trocaCarro(int piloto1, int piloto2){
		int auxiliar = this.carroDoPiloto[piloto1];
		this.carroDoPiloto[piloto1] = this.carroDoPiloto[piloto2];
		this.carroDoPiloto[piloto2] = auxiliar;
	}
	
	// Adiciona vitoria ao piloto
	public void adicionaVitoria(int idPiloto){
		int titulos = this.listaPiloto[idPiloto].getNumeroTitulos();
		titulos++;
		this.listaPiloto[idPiloto].setNumeroTitulos(titulos);
	}
	
	// Imprime piloto com mais vitórias e seu carro
	public int imprimeMaisVitorioso(){
		// Podeira ser um Integer.MIN_VALUE, mas optei pela primeira variável
		int maior = listaPiloto[0].getNumeroTitulos();
		int idPiloto = 0;
		for(int i=0; i < listaPiloto.length ;i++){
			if(listaPiloto[i].getNumeroTitulos() > maior){
				maior = listaPiloto[i].getNumeroTitulos();
				idPiloto = i;
			}
		}
		
		// Exibe Piloto com maior número de vitórias
		System.out.println("O piloto com mais vitórias é: " + listaPiloto[idPiloto].getNome() + " com " + listaPiloto[idPiloto].getNumeroTitulos() + " vitórias");
		// Exibe Carro deste piloto
		System.out.println("--- Atributos do carro ---");
		System.out.println("Marca do motor: "		+ listaCarro[carroDoPiloto[idPiloto]].getMarcaMotor());
		System.out.println("Chassi: "				+ listaCarro[carroDoPiloto[idPiloto]].getChassi());
		System.out.println("Marca do pneu: "		+ listaCarro[carroDoPiloto[idPiloto]].getMarcaPneu());
		System.out.println("Marca do combustivel: "	+ listaCarro[carroDoPiloto[idPiloto]].getMarcaCombustivel());
		return idPiloto;
	}
	
	/* Get's e Set's */
	
	// Public para ser acessador de qualquer lugar do projeto
	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getDataFundacao() {
		return dataFundacao;
	}

	public void setDataFundacao(String dataFundacao) {
		this.dataFundacao = dataFundacao;
	}

	public String getPais() {
		return pais;
	}

	public void setPais(String pais) {
		this.pais = pais;
	}
 
}
