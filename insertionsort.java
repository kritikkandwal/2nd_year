import java.util.*;

class insertionsort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt(); // size of array
        int arr[] = new int[n]; // array declaration

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt(); // input array elements
        }

        // Insertion sort logic
        for (int i = 1; i < n; i++) {
            int key = arr[i]; // pick the current element
            int j = i - 1;

            // shift elements greater than key one step to the right
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }

            // insert the key at correct position
            arr[j + 1] = key;
        }

        // Print sorted array
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
 