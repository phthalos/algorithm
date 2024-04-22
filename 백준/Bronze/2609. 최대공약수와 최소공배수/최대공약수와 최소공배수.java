//import java.util.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        /*
            최대공약수 GCD(Greatest Common Divisor)
            인수분해 방식은 시간이 너무 많이 걸린다는 단점이 있다.
            이번에는 '유클리드 호제법(Euclidean algorithm)'이라는 알고리즘 방식을 사용해 보자.
        */
        int a = sc.nextInt();
        int b = sc.nextInt();
        int d = gcd(a, b);

        System.out.println(d); // GCD
        System.out.println(a * b / d); // 최소공배수 LCM(Least Common Multiple)

    }
    
    // 재귀 방식
    public static int gcd(int a, int b){
        if (b == 0)
            return a;

        // GCD(a, b) = GCD(b, r)이므로 (r = a % b)
        return gcd(b, a % b);
    }
}