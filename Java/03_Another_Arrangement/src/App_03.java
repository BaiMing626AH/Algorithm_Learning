import java.util.Scanner;

public class App_03 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String str1 = scanner.nextLine();
        String str2 = scanner.nextLine();

        if (str1.length() != str2.length()) {
            System.out.println("NO");
            scanner.close();
            return;
        }
        char[] arr1 = str1.toCharArray();
        char[] arr2 = str2.toCharArray();
        SortUtils.Sort(arr1);
        SortUtils.Sort(arr2);
        for (int i = 0; i < arr1.length; i++) {
            if (arr1[i] != arr2[i]) {
                System.out.println("NO");
                scanner.close();
                return;
            }
        }

        System.out.println("YES");
        scanner.close();
    }
}