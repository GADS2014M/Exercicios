import java.util.Scanner;


public class zero2 {

	/**
	 * @author Josinaldo Albuquerque Barbosa
	 */
	public static void main(String[] args) {
	
		Scanner input = new Scanner(System.in);
		
		// Variáveis
		String mes;
		
		// Solicita o mês desejado
		System.out.print("\n[ ---------------- Eventos do mês 02 ---------------- ]\n");
		System.out.print("\n   Por favor, digite o NOME do mês desejado(caixa baixa): ");
		mes = input.next();
		
		// Verifica e exibe o resultado
		switch (mes){
			case "janeiro": System.out.print("\n   Confraternização Universal.\n");
				break;
			case "fevereiro": System.out.print("\n   Não tem eventos :(.\n");
				break;
			case "março": System.out.print("\n   Carnaval.\n");
				break;
			case "abril": System.out.print("\n   Sexta-feira Santa/Tiradentes.\n");
				break;
			case "maio": System.out.print("\n   Dia do Trabalhador.\n");
				break;
			case "junho": System.out.print("\n   Corpus Christi.\n");
				break;
			case "julho": System.out.print("\n   Não tem eventos :(.\n");
				break;
			case "agosto": System.out.print("\n   Não tem eventos :(.\n");
				break;
			case "setembro": System.out.print("\n   Independência do Brasil.\n");
				break;
			case "outubro": System.out.print("\n   Padroeira do Brasil.\n");
				break;
			case "novembro": System.out.print("\n   Finados/Proclamação da República\n");
				break;
			case "dezembro": System.out.print("\n   Natal.\n");
				break;
			default: System.out.print("\n   Erro: mês inválido\n");
				break;
		}
		
		System.out.print("\n[ --------------------------------------------------- ]\n");

	}

}
