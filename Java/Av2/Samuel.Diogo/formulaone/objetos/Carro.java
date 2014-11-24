package formulaone.objetos;

public class Carro {
	
	private int IdCarro; // adicionei o idCarro para facilitar a indexação do Carro junto ao piloto
	private String chassi;
	private String marcaMotor;
	private String marcaPneu;
	private String marcaCombustível;
	
	public int getIdCarro() {
		return IdCarro;
	}
	public void setIdCarro(int idCarro) {
		this.IdCarro = idCarro;
	}
		
	public String getChassi() {
		return chassi;
	}
	public void setChassi(String chassi) {
		this.chassi = chassi;
	}
	public String getMarcaMotor() {
		return marcaMotor;
	}
	public void setMarcaMotor(String marcaMotor) {
		this.marcaMotor = marcaMotor;
	}
	public String getMarcaPneu() {
		return marcaPneu;
	}
	public void setMarcaPneu(String marcaPneu) {
		this.marcaPneu = marcaPneu;
	}
	public String getMarcaCombustível() {
		return marcaCombustível;
	}
	public void setMarcaCombustível(String marcaCombustível) {
		this.marcaCombustível = marcaCombustível;
	}
}
