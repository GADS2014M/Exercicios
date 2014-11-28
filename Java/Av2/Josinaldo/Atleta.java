import categoria.Modalidade;



public class Atleta {
	// Variáveis private para reinstrigir o acesso a está classe
	private String 	nome;
	private int		idade;
	private char	sexo;
	private int		fama;
	
	private Modalidade mod;
	
	// Cadastra atleta, static pra nao precisar instanciar na classe main
	public static Atleta cadastraAtleta(String nome, int idade, char sexo, int fama, Modalidade mod){
		// Instancia atleta
		Atleta atleta = new Atleta();
		atleta.setNome(nome);
		atleta.setIdade(idade);
		atleta.setSexo(sexo);
		atleta.setFama(fama);
		atleta.setMod(mod);
		
		return atleta;
	}
	
	// Métodos publicos para ser acessiveis em qualquer lugar
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

	public String getSexo() {
		String sexoR;
		if(sexo == 'm'){
			sexoR = "Masculino";
		}else if(sexo == 'f'){
			sexoR = "Feminino";
		}else{
			sexoR = "Erro";
		}
		return sexoR;
	}

	public void setSexo(char sexo) {
		this.sexo = sexo;
	}

	public int getFama() {
		return fama;
	}

	public void setFama(int fama) {
		this.fama = fama;
	}

	public Modalidade getMod() {
		return mod;
	}

	public void setMod(Modalidade mod) {
		this.mod = mod;
	}
}
