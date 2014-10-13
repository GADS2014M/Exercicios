import java.util.Scanner;

public class HelloWorld
{

    public static void main(String []args)
    {
        Scanner input = new Scanner(System.in);
        
        int number1;
        int number2;
        int sum;
        
        System.out.print("Digite o primeiro numero: ");
        number1 = input.nextInt();
        
        System.out.print("Digite o segundo numero: ");
        number2 = input.nextInt();
        
        sum = number1 + number2;
        
        System.out.print("A soma dos numeros e: ");
        System.out.print(sum);
    }
}
