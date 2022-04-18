import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class CodeForcesStringTask {

	public static void main(String[] args) {
		final Scanner scanner = new Scanner(System.in);
		final List<Character> vowels = Arrays.asList('a', 'e', 'i', 'o', 'u', 'y');

		final String input = scanner.next();
		final int length = input.length();

		StringBuilder builder = new StringBuilder();

		for (int i = 0; i < length; i++) {
			char cLower = Character.toLowerCase(input.charAt(i));
			if (vowels.contains(cLower)) {
				continue;
			}
			builder.append('.');
			builder.append(cLower);
		}

		System.out.println(builder.toString());

		scanner.close();
	}

}
