/*
 *Calculadora simples, apenas com as operações aritméticas. (Switch. A 
*multiplicação deve ser implementada com um laço For)
 */

import java.util.Scanner;

public class prog3 {
	
	public static void main (String[] args) {
		int n1,n2,resultado=0;
		String operador;
		
		Scanner leia = new Scanner(System.in);
		
		System.out.print("Informe o tipo de operação [+ - * /]: ");
		operador = leia.next();
		
		System.out.print("informe o primeiro numero");
		n1 = leia.nextInt();
		
		System.out.print("informe o Segundo numero");
		n2 = leia.nextInt();
		
		switch(operador){
			
			case "+":
			resultado = n1+n2;
			System.out.printf("Resultado:%d",resultado);
			break;
			
			case "-":
			resultado = n1-n2;
			System.out.printf("Resultado:%d",resultado);
			break;
			
			case "/":
			resultado = n1/n2;
			System.out.printf("Resultado:%d",resultado);
			break;
			
			case "*":
			for (int i=0; i< n1; i++) {
				resultado += n2;
				}
			System.out.printf("Resultado:%d",resultado);
			break;
			
			default:
			System.out.print("Operação invalida");
			break;
			
		}
		
		
	}
	
}
