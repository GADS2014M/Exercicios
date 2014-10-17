import java.util.Scanner;


public class zero1 {

	/**
	 * @author Josinaldo Albuquerque Barbosa
	 */
	
	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
		// Variáveis
		int mes;
		
		// Pede o mês
		System.out.print("\n[ ---------------- Eventos do mês ---------------- ]\n");
		System.out.print("\n   Por favor, digite o mês desejado: ");
		mes = input.nextInt();
		
		// Verifica e exibe resutado do mes
		if (mes == 1){
			System.out.print("\n   Janeiro: 01 - Confraternização Universal. \n");
		} else if (mes == 2) {
			System.out.print("\n   Fevereiro: Não tem eventos :(. \n");
		} else if (mes == 3) {
			System.out.print("\n   Março: 04 - Carnaval. \n");
		} else if (mes == 4) {
			System.out.print("\n   Abril: 18 - Sexta-feira Santa \n\t  21 - Tiradentes. \n");
		} else if (mes == 5) {
			System.out.print("\n   Maio: 01 - Dia do Trabalhador. \n");
		} else if (mes == 6) {
			System.out.print("\n   Junho: 19 - Corpus Christi. \n");
		} else if (mes == 7) {
			System.out.print("\n   Julho: Não tem eventos :(. \n");
		} else if (mes == 8) {
			System.out.print("\n   Agosto: Não tem eventos :(. \n");
		} else if (mes == 9) {
			System.out.print("\n   Setembro: 07 - Independência do Brasil. \n");
		} else if (mes == 10){
			System.out.print("\n   Outubro: 12 - Padroeira do Brasil. \n");
		} else if (mes == 11){
			System.out.print("\n   Novembro: 02 - Finados \n\t     15 - Proclamação da República. \n");
		} else if (mes == 12){
			System.out.print("\n   Dezembro: 25 - Natal. \n");
		} else {
			System.out.print("\n   Erro: mês inválido! \n");
		}
		
		System.out.print("\n[ ------------------------------------------------ ]");

	}
}
