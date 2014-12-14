package br.com.infnet.professor;

import java.util.Random;

public class Professor {
	// Private para proteger e fica restrito a está classe
	private String	nome;
	private String	especialidade;
	private int	maldade;
	
	// Cria professor
	public static Professor criaProfessor(String nome, String especialidade, int maldade){
		// Istancia a classe
		Professor p = new Professor();
		// Salva
		p.setNome(nome);
		p.setEspecialidade(especialidade);
		p.setMaldade(maldade);
		return p;
	}
	
	// Aumenta maldade em 50%
	public static int aumentaMaldade50(int maldade){
		int metade = maldade / 2;
		maldade = maldade + metade;
		if(maldade > 100){
			maldade = 100;
		}
		return maldade;
	}
	
	// Gerador de maldade(não quero me comprometer haha)
	public static int geraMaldade(){
		// Instância um objeto da classe Random
		Random gerador = new Random();
		// Valor aleatório inteiro entre 0 e 100
		int maldade = gerador.nextInt(101);
		return maldade;
	}
	
	// Public para poder ser acessivel por qualquer um
	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getEspecialidade() {
		return especialidade;
	}

	public void setEspecialidade(String especialidade) {
		this.especialidade = especialidade;
	}

	public int getMaldade() {
		return maldade;
	}

	public int setMaldade(int maldade) {
		return this.maldade = maldade;
	}
	
}
