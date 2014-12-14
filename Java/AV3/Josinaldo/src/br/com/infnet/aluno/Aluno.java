package br.com.infnet.aluno;

import br.com.infnet.disciplina.Disciplina;

public class Aluno {
	// Private para proteger e fica restrito a está classe
	private int 	 	 matricula;
	private String 	 	 nome;
	private int 	 	 idade;
	private String	 	 curso;
	private Disciplina[] disciplinas = new Disciplina[5];
	
	// Cria aluno
	public static Aluno criaAluno(int matricula, String nome, int idade, String curso, Disciplina dis1, Disciplina dis2, Disciplina dis3, Disciplina dis4, Disciplina dis5){
		// Instancia classe
		Aluno a = new Aluno();
		// Salva
		a.setMatricula(matricula);
		a.setNome(nome);
		a.setIdade(idade);
		a.setCurso(curso);
		a.cadastraDisciplina(dis1, 0);
		a.cadastraDisciplina(dis2, 1);
		a.cadastraDisciplina(dis3, 2);
		a.cadastraDisciplina(dis4, 3);
		a.cadastraDisciplina(dis5, 4);
		return a;
	}
	
	// Cadastra disciplina
	public void cadastraDisciplina(Disciplina d, int indice){
		this.disciplinas[indice] = d;
	}
	
	// Calcula CR
	public void calculaCR(){
		// Sem tempo de terminar - 8. Crie um método, na classe Aluno, que calcula o CR deste aluno (Média das médias de cada disciplina.
	}
	
	// Professor mais malvado
	public void professorMaisMalvado(){
		// Sem tempo de terminar - 9. Crie um método, na classe Aluno, que a Disciplina que possui o professor mais malvado.
	}
	
	// Aumenta em 50% a maldade de um professor que tenha atribuído zero para uma ou mais notas de uma disciplina de um aluno.
	public void aumentaMaldadeComZero(){
		// Sem tempo de terminar - 10. Crie um método, na classe Aluno, que aumenta em 50% a maldade de um professor que tenha atribuído zero para uma ou mais notas de uma disciplina de um aluno.
		// Utilize o método previamente desenvolvido no item 5 neste novo método.
	}
	
	// Public para poder ser acessivel a qualquer um
	public int getMatricula() {
		return matricula;
	}
	public void setMatricula(int matricula) {
		this.matricula = matricula;
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
	public String getCurso() {
		return curso;
	}
	public void setCurso(String curso) {
		this.curso = curso;
	}
	public Disciplina getDisciplinas(int indice) {
		return disciplinas[indice];
	}

}
