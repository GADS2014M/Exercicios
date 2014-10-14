/*
 O usuário digita com um número que representa um mês do ano, e o 
programa imprime na tela um evento importante que aconteça neste mês. 
(If - Else) 
 */

import java.util.Scanner;

public class prog1 {
	
	public static void main (String args[]) {
		
		//declaração de variaveis
		int mes;
		// Instancia leia de Scanner, essa variavel vai monitorar
		// System.in (Entrada de dados pelo teclado)
		Scanner leia = new Scanner(System.in);
		System.out.print("Informe um numero correspondente a um mes: ");
		// mes recebe valor inteiro informado no terminal
		mes = leia.nextInt();
		
		if (mes == 1) {
			System.out.print("Janeiro:\n");
			System.out.print("Confraternização Universal Dia Mundial da Paz");
		}else if (mes==2) {
			System.out.print("Fevereiro:\n");
			System.out.print("Dia Internacional da Mulher");
			}else if (mes==3) {
				System.out.print("Março:\n");
				System.out.print("Carnaval");
				}else if (mes==4) {
					System.out.print("Abril:\n");
					System.out.print("Dia da Mentira");
					}else if (mes==5) {
						System.out.print("Maio:\n");
						System.out.print("Dia das Mães");
						}else if (mes==6) {
							System.out.print("Junho:\n");
							System.out.print("Dia de São João");
							}else if (mes==7) {
								System.out.print("Julho:\n");
								System.out.print("Dia da Liberdade de Pensamento");
								}else if (mes==8) {
									System.out.print("Agosto:\n");
									System.out.print("Dia dos Pais");
									}else if (mes==9) {
										System.out.print("Setembro:\n");
										System.out.print("Independência do Brasil");
										}else if (mes==10) {
											System.out.print("Outubro:\n");
											System.out.print("Dia das Bruxas - Halloween ");
											}else if (mes==11) {
												System.out.print("Novembro:\n");
												System.out.print("Proclamação da República");
												}else if (mes==12) {
													System.out.print("Dezembro:\n");
													System.out.print("Reveillon");
													}else {
														System.out.print("Mes invalido");
														}
	}
}

