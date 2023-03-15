import java.util.Scanner;
import java.lang.Math;

public class bubble {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int arr[] = new int[20];

        for (int i = 0; i < 20; i++) {
            arr[i] = (int) (Math.random() * 10);
        }

        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr.length; j++) {
                if (arr[i] <= arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        for (int i = 0; i < arr.length; i++) {
            System.out.println("The elements are " + arr[i]);
        }

    }
}