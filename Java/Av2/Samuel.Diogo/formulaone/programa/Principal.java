package formulaone.programa;

import formulaone.objetos.*;

/**
 * @author samuel.jesus
 *
 */
public class Principal {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		
		//crio o piloto1;
		Piloto p1 = new Piloto();
		p1.setIdPiloto(0);
		p1.setIdade(23);
		p1.setNome("Supremo Samuel Diogo, O Cara");
		p1.setNumeroTitulos(69);
		p1.setNacionalidade("Brasileiro");
		
		//crio o piloto2;
		Piloto p2 = new Piloto();
		p2.setIdPiloto(1);
		p2.setIdade(29);
		p2.setNome("Lewis Hamilton, O aprendiz");
		p2.setNumeroTitulos(33);
		p2.setNacionalidade("British");
		
		//crio o piloto Carro1;
		Carro c1 = new Carro();
		c1.setIdCarro(0);
		c1.setChassi("F14T");
		c1.setMarcaCombustível("Petrobras Podium");
		c1.setMarcaMotor("Mercedes Bens");
		c1.setMarcaPneu("Pirelli");
		
		//crio o carro2;
		Carro c2 = new Carro();
		c2.setIdCarro(1);
		c2.setChassi("F13T");
		c2.setMarcaCombustível("Petronas");
		c2.setMarcaMotor("Renaut");
		c2.setMarcaPneu("Toyo");
		
	
		
		Equipe e = new Equipe();
		e.setNome("GADS Force Team");
		e.setPais("Brazil");
		e.setDataFundacao("24-11-2014");
		e.cadastraPiloto(p1, p1.getIdPiloto());
		e.cadastraPiloto(p2, p2.getIdPiloto());
		e.cadastraCarro(c1, c1.getIdCarro());
		e.cadastraCarro(c2, c2.getIdCarro());
		
		e.designaCarroParaPiloto(c1.getIdCarro(), p1.getIdPiloto());
		e.designaCarroParaPiloto(c2.getIdCarro(), p2.getIdPiloto());
		
		Piloto campeao = new Piloto();
		campeao = e.getPilotoTop();
		e.imprimePilotoTop(campeao);
		
		//* Utilizando um dos métodos criados, atribua uma vitória ao Piloto com maior número de vitórias.
		e.adicionaVitoria(campeao.getIdPiloto());
		e.imprimePilotoTop(campeao);
		e.trocaCarro(p1.getIdPiloto(), p2.getIdPiloto());
		e.imprimePilotoTop(campeao);
	}

}
