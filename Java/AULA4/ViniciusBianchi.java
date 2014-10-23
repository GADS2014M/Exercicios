import java.util.Random;
import java.util.Scanner;
import java.util.ArrayList; // Classe que utilizei para criar a lista de Strings.

/**
 * @author Vinicius Bianchi
 */

/**Criar uma matriz que represente os nomes dos integrantes de quatro duplas 
de jogadores de sinuca. O programa deve sortear dois jogadores, que 
podem pertencer ao mesmo grupo, e imprimir: “Próximo jogo: Jogador1 x 
Jogador 2. Não perca!”. Em sua primeira versão, permita que um jogador 
seja sorteado para jogar contra ele mesmo.
*/

public class ExercicioDois {

	public static void main(String[] args) {
		Random numeroAleatorio = new Random(); // Instanciei a classe random para gerar números aleatorios futuramente
		
		String[][] duplas;
		duplas = new String[4][2];
				
		ArrayList<String> listaJogadores = new ArrayList(); //Instanciei a classe ArrayList para criar minha lista de nomes
		
		//Adicionei a lista de nomes ao objeto listaJogadores que agora possui 8 elementos
		listaJogadores.add("Jogador1");
		listaJogadores.add("Jogador2");
		listaJogadores.add("Jogador3");
		listaJogadores.add("Jogador4");
		listaJogadores.add("Jogador5");
		listaJogadores.add("Jogador6");
		listaJogadores.add("Jogador7");
		listaJogadores.add("Jogador8");
		
		int num = listaJogadores.size(); // atribuí a uma var inteira o número de índices que minha lista tem (8)
		
		for (int i = 0; i < duplas.length; i++)
		{
			for(int j = 0; j < duplas[i].length; j++)
			{
				if (j == 1)
					{
						duplas[i][j] = listaJogadores.get(numeroAleatorio.nextInt(8));
						
						System.out.print(duplas[0][1] + ". Não perca!");
						//System.out.print(duplas[i][j] + ". Não perca!");
					}
				else
					{
						duplas[i][j] = listaJogadores.get(numeroAleatorio.nextInt(8));
					
						System.out.print("Próximo Jogo: " + duplas[0][0] + " x ");
						//System.out.print("Próximo Jogo: " + duplas[i][j] + " x ");
					}
				
			}
			System.out.println();
			break; // o break esta aqui para printar somente o proximo jogo, nao todos.
		}
		
		
	}

}
