import java.util.Scanner;

public class Main {
    int func(int a, int b) {
        return (a + b) * (a - b);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();

        Main main = new Main();
        System.out.println(main.func(a,b));
    }
}