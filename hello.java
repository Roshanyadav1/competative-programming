import java.net.CacheRequest;
import java.util.Scanner;

// Your First Program
class HelloWorld {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int totalElement = sc.nextInt();
            System.out.println(totalElement + "Hello, World!");
        }
    }
}