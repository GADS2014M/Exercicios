import java.util.Scanner;


public class zero3 {

	/**
	 * @author Josinaldo Albuquerque Barbosa
	 */

	public static void main(String[] args) {

		Scanner input = new Scanner(System.in);

		// Variáveis
		float n1, n2, resultado;
		String op;

		// Solicita os valores e tipo de operação a ser realizada
		System.out.print("\n[ -------------------------- Calculadora 1.0 -------------------------- ]\n");
		System.out.print("\n  Por favor, digite o primeiro número: ");
		n1 = input.nextFloat();
		System.out.print("  Por favor, digite o segundo número: ");
		n2 = input.nextFloat();
		System.out.print("  Por favor, digite a operação a ser realizada(ex.: + | - | * | / | % ): ");
		op = input.next();

		// Verifica e exibe o resultado
		switch (op){

		// Soma
		case "+":
			resultado = n1 + n2;
			System.out.print("\n   A soma de " + n1 + " + " + n2 + " é: " + resultado +"\n");
			break;

		// Subtrai
		case "-":
			resultado = n1 - n2;
			System.out.print("\n   A subtração de " + n1 + " - " + n2 + " é: " + resultado +"\n");
			break;

		// Multiplica (com for)
		case "*":
			// Verifica se n1 ou n2 é igual a 0
			if (n1 == 0 || n2 == 0){
				System.out.print("\n   Erro: a multiplicação não pode ser por 0!\n");

				// Multiplica caso seja positivo
			} else if (n1 > 0 || n2 > 0){
				System.out.print("\n   Multiplicando...\n\n");
				for(int i = 1; i <= n2; i++) {
					resultado = n1 * i;
					System.out.println("   " + n1 + " X " + i + " = " + resultado);
				}
				// Multiplica caso seja negativo
			} else if (n1 < 0 || n2 < 0){
				System.out.print("\n   Multiplicando...\n\n");
				for(int i = -1; i >= n2; i--) {
					resultado = n1 * i;
					System.out.println("   " + n1 + " X " + i + " = " + resultado);
				}
			}
			break;

		// Dividi
		case "/":
			if (n1 == 0 || n2 == 0){
				System.out.print("\n   Erro: a divisão não pode ser por 0!\n");
			} else {
			resultado = n1 / n2;
			System.out.print("\n   A divisão de " + n1 + " / " + n2 + " é: " + resultado +"\n");
			}
			break;

		// Resto da divisão
		case "%":
			resultado = n1 % n2;
			// Verifica  se o n2 tem valor 2, então verifica o resto da divisão atribuindo par(0) ou impar(1)
			if ((n2 == 2) && (resultado == 0)){
				System.out.print("\n   O resto da divisão entre " + n1 + " % " + n2 + " é: " + resultado +" - PAR \n");
			} else if ((n2 == 2) && (resultado == 1)){
				System.out.print("\n   O resto da divisão entre " + n1 + " % " + n2 + " é: " + resultado +" - IMPAR \n");
			} else {
				System.out.print("\n   O resto da divisão entre " + n1 + " % " + n2 + " é: " + resultado +"\n");
			}
			break;

		// Outro caso
		default: System.out.print("\n   Erro: operação inválida!\n");
		break;
		}

		System.out.print("\n[ --------------------------------------------------------------------- ]\n");

	}

}
