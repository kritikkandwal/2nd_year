//kth smallest and largest 
import java.util.*;

class KthElementSorting {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int arr[] = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        Arrays.sort(arr); // O(n log n)

        System.out.println("Kth Smallest: " + arr[k - 1]);
        System.out.println("Kth Largest: " + arr[n - k]);
    }
}
