package com.formula1.garagem.corrida;

public class Piloto {
	// Private para proteger e ser acessado somente por esta classe
	private int 	id;
	private String 	nome;
	private int		idade;
	private String	nacionalidade;
	private int		numeroTitulos;
	
	// Public static para ser acessador de qualquer lugar do projeto sem precisar instanciar
	// Cadastra piloto
	public static Piloto cadastraPiloto(int id, String nome, int idade, String nacionalidade, int numeroTitulos){
		// Instancia piloto
		Piloto p = new Piloto();
		// Salva nas variáveis
		p.setId(id);
		p.setNome(nome);
		p.setIdade(idade);
		p.setNacionalidade(nacionalidade);
		p.setNumeroTitulos(numeroTitulos);
		return p;
	}

	// Public para ser acessador de qualquer lugar do projeto
	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public int getIdade() {
		return idade;
	}

	public void setIdade(int idade) {
		this.idade = idade;
	}

	public String getNacionalidade() {
		return nacionalidade;
	}

	public void setNacionalidade(String nacionalidade) {
		this.nacionalidade = nacionalidade;
	}

	public int getNumeroTitulos() {
		return numeroTitulos;
	}

	public void setNumeroTitulos(int numeroTitulos) {
		this.numeroTitulos = numeroTitulos;
	}

}
