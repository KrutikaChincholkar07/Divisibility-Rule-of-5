import java.util.Scanner;

public class DivisibleBy5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = sc.nextInt();

        int lastDigit = num % 10;

        if (lastDigit == 0 || lastDigit == 5)
            System.out.println(num + " is divisible by 5");
        else
            System.out.println(num + " is not divisible by 5");
    }
}
