//import java.util.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int h = sc.nextInt();
        int m = sc.nextInt();
        if (0 <= h && h <= 23 && 0 <= m && m <= 59){
            if (m < 45) {
                m = m + 15;
                h = h - 1;
                if (h < 0){
                    h = 23;
                }
                System.out.print(h + " " + m);
            }else{
                System.out.print(h + " " + (m - 45));
            }
        }else{
            System.out.print("out of range");
        }
    }
}