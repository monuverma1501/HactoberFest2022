import java.util.*;

public class LinearSearch {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int found = 0;
        System.out.println("Enter size of array");
        int len = sc.nextInt();
        int arr[] = new int[len];
        for (int i = 0; i < len; i++) {
            System.out.println("Enter element");
            arr[i] = sc.nextInt();
        }
        System.out.println("Enter the number to be searched");
        int n = sc.nextInt();
        for (int i = 0; i < len; i++) {
            if (arr[i] == n) {
                found = i;
                break;
            }
        }
        if (found != 0) {
            System.out.println("Element found at:" + found + "index");
        } else
            System.out.println("Not found");
        sc.close();

    }
}
