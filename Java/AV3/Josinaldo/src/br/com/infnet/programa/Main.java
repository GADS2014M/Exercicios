package br.com.infnet.programa;

import br.com.infnet.aluno.Aluno;
import br.com.infnet.disciplina.Disciplina;
import br.com.infnet.professor.Professor;

/**
 * @author Josinaldo de Albuquerque Barbosa
 * @email josinaldo.barbosa@al.infnet.edu.br
 */

public class Main {

	public static void main(String[] args) {
		// Cria professor
		Professor[] prof = new Professor[5];
		prof[0] = Professor.criaProfessor("Paulo Maurício Cardoso Mello", "UML"			, Professor.geraMaldade());
		prof[1] = Professor.criaProfessor("Rafael de Pinho André"		, "Java"		, Professor.geraMaldade());
		prof[2] = Professor.criaProfessor("Daniela Ribeiro Monteiro"	, "Matemática"	, Professor.geraMaldade());
		prof[3] = Professor.criaProfessor("Luiz Paulo Maia"				, "Hardware"	, Professor.geraMaldade());
		prof[4] = Professor.criaProfessor("Soraia Rocha"				, "Empreender"	, Professor.geraMaldade());
		
		// Cria disciplina
		Disciplina[] dis = new Disciplina[5];									/* NOTAS | 1ª | 2ª | 3ª | */
		dis[0] = Disciplina.criaDisciplina("Análise e Projeto com UML II", "09:50", prof[0], 5,   5, 3);
		dis[1] = Disciplina.criaDisciplina("Programação Java I"			 , "10:00", prof[1], 9,   0, 6);
		dis[2] = Disciplina.criaDisciplina("Estruturas Discretas II"	 , "11:00", prof[2], 10,  2, 8);
		dis[3] = Disciplina.criaDisciplina("Técnicas de Programação"	 , "12:00", prof[3], 3,  10, 9);
		dis[4] = Disciplina.criaDisciplina("Gestão Empresarial"			 , "16:00", prof[4], 4,   2, 6);
		
		// Cria aluno
		String nomeDoCurso = "Análise e Desenvolvimento de Sistemas";
		Aluno osvaldo = Aluno.criaAluno(165787, "OSVALDO PYTHON DA SILVA", 25, nomeDoCurso, dis[0], dis[1], dis[2], dis[3], dis[4]);
		
		// Exibe Aluno
		System.out.printf("[----------------------------------------------------------------------]\n\n");
		System.out.printf("  Matrícula: " + osvaldo.getMatricula());
		System.out.printf("\n  Nome: "	  + osvaldo.getNome());
		System.out.printf("\n  Idade: "	  + osvaldo.getIdade());
		System.out.printf("\n  Curso: "	  + osvaldo.getCurso());
		System.out.printf("\n");
		
		// Exibe disciplinas e professores
		for(int i = 0;i < dis.length; i++){
			int numero = i+1;
			System.out.printf("\n  --------------------------- Disciplina "+ numero +" ---------------------------");
			System.out.printf("\n  Nome: "			+ osvaldo.getDisciplinas(i).getNome());
			System.out.printf("\n  Horário: "		+ osvaldo.getDisciplinas(i).getHorario());
			System.out.printf("\n  Professor: "		+ osvaldo.getDisciplinas(i).getProfessor().getNome());
			System.out.printf("\n  Especialidade: "	+ osvaldo.getDisciplinas(i).getProfessor().getEspecialidade());
			System.out.printf("\n  Maldade: "		+ osvaldo.getDisciplinas(i).getProfessor().getMaldade());
			System.out.printf("\n  Nota 1: "		+ osvaldo.getDisciplinas(i).getNotas(0));
			System.out.printf("\n  Nota 2: "		+ osvaldo.getDisciplinas(i).getNotas(1));
			System.out.printf("\n  Nota 3: "		+ osvaldo.getDisciplinas(i).getNotas(2));
		}
		
		System.out.printf("\n[----------------------------------------------------------------------]");
	}

}
