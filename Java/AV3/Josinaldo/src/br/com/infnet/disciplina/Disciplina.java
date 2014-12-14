package br.com.infnet.disciplina;

import br.com.infnet.professor.Professor;

public class Disciplina {
	// Private para proteger e fica restrito a está classe
	private String		nome;
	private String		horario;
	private Professor 	professor;
	private float[] 	notas = new float[3];
	
	// Cria disciplina
	public static Disciplina criaDisciplina(String nome, String horario, Professor professor, float nota1, float nota2, float nota3){
		// Instancia a classe
		Disciplina d = new Disciplina();
		// Salva
		d.setNome(nome);
		d.setHorario(horario);
		d.setProfessor(professor);
		d.setNotas(nota1, 0);
		d.setNotas(nota2, 1);
		d.setNotas(nota3, 2);
		return d;
	}
	
	// Public para poder ser acessivel por qualquer um
	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getHorario() {
		return horario;
	}

	public void setHorario(String horario) {
		this.horario = horario;
	}

	public Professor getProfessor() {
		return professor;
	}

	public void setProfessor(Professor professor) {
		this.professor = professor;
	}

	public float getNotas(int indice) {
		return notas[indice];
	}

	public void setNotas(float notas, int indice) {
		this.notas[indice] = notas;
	}

}
