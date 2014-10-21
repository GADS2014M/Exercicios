package aulaQuatro;

public class multiArrrr 
{

	public static void main(String[] args)
	{
		int i, j, a;
		int[][] idadeAlunos;
		idadeAlunos = new int[6][20];
		
		for (i = 0; i < idadeAlunos.length; i++)
		{
			for (j = 0; j < idadeAlunos[i].length; i++)
			{
				for (a = 10; a < 15; a++)
				{
				idadeAlunos[i][j] = (12 + (a % 5));
				System.out.println(idadeAlunos[i][j]);
				}
			}
		}
	}
}
