

/*
* O usuário digita um mês do ano, e o programa imprime na tela um evento 
*importante que aconteça neste mês. (Switch)
*/


import java.util.Scanner;



public class prog2{
	public static void main (String[] args) {
		
		int mes;
		Scanner leia  = new Scanner(System.in);
		System.out.print("Informe um numero correspondente a um mes: ");
		mes = leia.nextInt();
		switch(mes) {
			case 1:
			System.out.print("Janeiro:\n");
			System.out.print("Confraternização Universal Dia Mundial da Paz");
			break;
			
			case 2:
			System.out.print("Fevereiro:\n");
			System.out.print("Dia Internacional da Mulher");
			break;
			
			case 3:
			System.out.print("Março:\n");
			System.out.print("Carnaval");
			break;
			
			case 4:
			System.out.print("Abril:\n");
					System.out.print("Dia da Mentira");
			break;
			
			case 5:
			System.out.print("Maio:\n");
			System.out.print("Dia das Mães");
			break;
			
			case 6:
			System.out.print("Junho:\n");
			System.out.print("Dia de São João");
			break;
			
			case 7:
			System.out.print("Julho:\n");
			System.out.print("Dia da Liberdade de Pensamento");
			break;
			
			case 8:
			System.out.print("Agosto:\n");
			System.out.print("Dia dos Pais");
			break;
			
			case 9:
			System.out.print("Setembro:\n");
			System.out.print("Independência do Brasil");
			break;
			
			case 10:
			System.out.print("Outubro:\n");
			System.out.print("Dia das Bruxas - Halloween ");
			break;
			
			case 11:
			System.out.print("Novembro:\n");
			System.out.print("Proclamação da República");
			break;
			
			case 12:
			System.out.print("Dezembro:\n");
			System.out.print("Reveillon");
			break;
			
			default:
			System.out.print("Mes invalido");
			break;
		
		}
		}
	
	}
