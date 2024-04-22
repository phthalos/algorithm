//import java.util.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        
        /* 
            StringBuilder는 문자열을 다루는 클래스로, reverse() 메소드를 포함하고 있다.
            append()를 이용하여 값을 넣고 toString()으로 변환된 문자열은
            Integer.parseInt()를 통해 int 타입으로 다시 변환된다.
         */
        a = Integer.parseInt(new StringBuilder().append(a).reverse().toString());
        b = Integer.parseInt(new StringBuilder().append(b).reverse().toString());

        int result = Math.max(a, b);
        System.out.print(result);
    }
}