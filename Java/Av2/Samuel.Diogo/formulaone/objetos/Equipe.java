package formulaone.objetos;

/**
 * @author samuel.jesus
 * 
 */
public class Equipe
{
	/**
	 * Optei por usar o encapsulamento dos campos visando maior segurança e controle de acesso
	 * dos atributos, sendo este um dos maiores pilares da orientação de objetos.
	 */
	private String nome;
	private String dataFundacao;
	private String pais;
	private Piloto[] listaPiloto;
	private Carro[] listaCarro;
	
	private int[] listaCarroDesignado = new int[2];
	
	final int MAX_CAR_PER_TEAM = 2;
	final int MAX_DRIVER_PER_TEAM = 2;
	
	public Piloto cadastraPiloto(Piloto piloto, int indice)
	{
		return this.listaPiloto[indice] = piloto;
	}
	
	public Carro cadastraCarro(Carro carro, int indice)
	{
		return this.listaCarro[indice] = carro;
	}
	
	public void designaCarroParaPiloto(int idCarro, int IdPiloto)
	{
		this.listaCarroDesignado[IdPiloto] = idCarro; 
	}
	
	public void trocaCarro(int IdPiloto1, int IdPiloto2)
	{
		int carroAtual = this.listaCarroDesignado[IdPiloto1];
		
		this.listaCarroDesignado[IdPiloto1] = this.listaCarroDesignado[IdPiloto2];
		
		this.listaCarroDesignado[IdPiloto2] = carroAtual;
	}
	
	public void adicionaVitoria(int idPiloto)
	{
		Piloto p = this.listaPiloto[idPiloto];
		int vitoria = p.getNumeroTitulos();
		vitoria++;
	
		p.setNumeroTitulos(vitoria);
		
		this.listaPiloto[idPiloto] = p;
	}
	
	/**
	 * 
	 * @return retorna o objeto Piloto com maior numero de vitorias  cadastrado na lista de pilotos
	 */
	public Piloto getPilotoTop()
	{
		Piloto pTop = this.listaPiloto[0];
		for(Piloto linha: this.listaPiloto)
		{
			if(linha.getNumeroTitulos() >= pTop.getNumeroTitulos())
			{
				pTop = linha;
			}
		}
		
		return pTop;
	}
	/**
	 *  este método imprime os dados do piloto com maior numero de vitorias
	 * @param pTop parâmetro do tipo Piloto;
	 */
	public void imprimePilotoTop(Piloto pTop)
	{
		System.out.println("O Piloto com maior números de vitorórias é: ");
		String resultado = "id: "+pTop.getIdPiloto() + "\nNome: " + pTop.getNome() + "\nIdade: " + pTop.getIdade();
		resultado += "\nNacionalidade: " + pTop.getNacionalidade() + "\nNúmero de Títulos: " + pTop.getNumeroTitulos();
		
		int idCarroPiloto = this.listaCarroDesignado[pTop.getIdPiloto()];
		Carro carro = this.listaCarro[idCarroPiloto]; 
		
		resultado += "\nDados do Carro: ";
		resultado += "\nChassi: " + carro.getChassi() + "\nMarca Combustivel: " + carro.getMarcaCombustível();
		resultado += "\nMarca Motor: " + carro.getMarcaMotor() +"\nMarca Pneu: "+ carro.getMarcaPneu();
		System.out.println(resultado);
	}
	
	/**
	 * utilizei o metodo construtor para criar a listas solicitadas usando
	 * também o conceito de constantes
	 */
	public Equipe()
	{
		listaPiloto = new Piloto[MAX_DRIVER_PER_TEAM];
		
		listaCarro = new Carro[MAX_CAR_PER_TEAM]; 
	}
	
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

	public Carro[] getListaCarro() {
		return listaCarro;
	}

	public void setListaCarro(Carro[] listaCarro) {
		this.listaCarro = listaCarro;
	}
	
	
}
