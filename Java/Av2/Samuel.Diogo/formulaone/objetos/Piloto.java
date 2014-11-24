package formulaone.objetos;

public class Piloto
{
	/**
	 * Optei por usar o encapsulamento dos campos visando maior segurança e controle de acesso
	 * dos atributos, sendo este um dos maiores pilares da orientação de objetos.
	 */
	private int idPiloto;
	private String nome;
	private int idade;
	private String nacionalidade;
	private int numeroTitulos;
	
	public int getIdPiloto() {
		return idPiloto;
	}
	public void setIdPiloto(int idPiloto) {
		this.idPiloto = idPiloto;
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
