// problem link
// https://codeforces.com/problemset/problem/1535/A

import java.util.*;

public class example{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t;
        t = sc.nextInt();

        while(t-- > 0){
            int[] arr = new int[4];

            for(int i = 0;i < 4;i++){
                arr[i] = sc.nextInt();
            }
                int a, b;

                a = (arr[0] > arr[1])? arr[0] : arr[1];
                b = (arr[2] > arr[3])? arr[2] : arr[3];

                Arrays.sort(arr);

                if((a == arr[3]) && b == arr[2]){
                    System.out.println("YES");
                }else if(a == arr[2] && b == arr[3]){
                    System.out.println("YES");
                }else{
                    System.out.println("NO");
                }

        }
    }
}
