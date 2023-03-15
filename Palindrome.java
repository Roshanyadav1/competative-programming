import java.util.*;

public class Palindrome {
    public static void main(String args[]) {
        try {
            Scanner sc = new Scanner(System.in);

            int number = sc.nextInt();
            int previous = number;
            int sum = 0, temp = 0;
            while (number > 0) {
                temp = number % 10;
                sum = (sum * 10) + temp;
                number = number / 10;
            }

            if (previous == sum) {
                System.out.println("This is a palindrome number ");

            } else {
                System.out.println("This is not a palindrome number");
            }

        } catch (Exception e) {
            // TODO: handle exception
            System.out.println(e);
        }
    }
}
