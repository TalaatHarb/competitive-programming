import java.util.Scanner;

public class CodeForcesWatermelon {

	public static void main(String[] args) {
		final Scanner scanner = new Scanner(System.in);

		final int input = scanner.nextInt();

		if (input % 2 == 0 && input > 2) {
			System.out.println("YES");
		} else {
			System.out.println("NO");
		}

		scanner.close();
	}
}
