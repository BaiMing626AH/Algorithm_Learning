import java.util.Scanner;

public class App_02 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String str = scanner.next(); // 读取一个字符串（遇空白结束）
        scanner.close();

        int count = str.length();

        for (int i = 0; i < count; i++) {
            for (int j = i + 1; j < count; j++) {
                if (str.charAt(i) == str.charAt(j)) { // 发现重复字符
                    System.out.println("NO");
                    return; // 直接结束程序
                }
            }
        }

        System.out.println("YES");
    }
}