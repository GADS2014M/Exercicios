package com.formula1.corrida;

public class Carro {
	// Private para proteger e ser acessado somente por esta classe
	private String	marcaMotor;
	private String 	chassi;
	private String 	marcaPneu;
	private String	marcaCombustivel;
	
	// Public static para ser acessador de qualquer lugar do projeto sem precisar instanciar
	// Cadastra carro
	public static Carro cadastraCarro(String marcaMotor, String chassi, String marcaPneu, String marcaCombustivel){
		// Instancia carro
		Carro c = new Carro();
		c.setMarcaMotor(marcaMotor);
		c.setChassi(chassi);
		c.setMarcaPneu(marcaPneu);
		c.setMarcaCombustivel(marcaCombustivel);
		return c;
	}
	
	// Public para ser acessador de qualquer lugar do projeto
	public String getMarcaMotor() {
		return marcaMotor;
	}

	public void setMarcaMotor(String marcaMotor) {
		this.marcaMotor = marcaMotor;
	}

	public String getChassi() {
		return chassi;
	}

	public void setChassi(String chassi) {
		this.chassi = chassi;
	}

	public String getMarcaPneu() {
		return marcaPneu;
	}

	public void setMarcaPneu(String marcaPneu) {
		this.marcaPneu = marcaPneu;
	}

	public String getMarcaCombustivel() {
		return marcaCombustivel;
	}

	public void setMarcaCombustivel(String marcaCombustivel) {
		this.marcaCombustivel = marcaCombustivel;
	}

}
