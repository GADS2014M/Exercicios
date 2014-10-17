import java.util.Scanner;

// Magic bitch!

public class AnoBissexto {

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
		// Variável
		int ano;
		
		// Pede o ano
		System.out.print("Por favor, digite o ano: ");
		ano = input.nextInt();
		
		// Verifica e exibe resultado
		// Fórmula: Se ano, dividido por 4, resto da divisão igual a 0 e ano dividido por 100, ou ano dividido por 400 resto da divisão igual a 0 é bissexto.
		if (((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0)) {
			System.out.println("É Bissexto");
		} else {
			System.out.println("Não é Bissexto");
		}

	}

}
