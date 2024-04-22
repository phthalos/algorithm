//import java.util.*;
//import java.util.Scanner;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        /*  BufferedReader는 한 줄씩 입력을 받기 때문에 StringTokenizer 또는
            String 배열, split()메소드로 공백을 구분해주어야 한다. */

        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        /*
            Scanner를 사용한다면 int타입으로 받아오기 때문에
            객체를 생성할 때 append() 메소드를 사용해야 한다.
            하지만 여기서는 넣어주려는 인자가 String 타입이므로 그럴 필요 없이 곧바로 값을 넣어주었다.
         */
        int a = Integer.parseInt(new StringBuilder(st.nextToken()).reverse().toString());
        int b = Integer.parseInt(new StringBuilder(st.nextToken()).reverse().toString());
        int result = Math.max(a, b);

        System.out.print(result);
    }
}