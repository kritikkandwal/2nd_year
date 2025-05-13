import java.util.*;

class MergeSortSimple {
    public static void mergeSort(int arr[], int low, int high) {
        if (low < high) {
            int mid = (low + high) / 2;

            // Sort left half
            mergeSort(arr, low, mid);

            // Sort right half
            mergeSort(arr, mid + 1, high);

            // Merge both halves
            merge(arr, low, mid, high);
        }
    }

    public static void merge(int arr[], int low, int mid, int high) {
        int i = low;
        int j = mid + 1;
        int k = 0;
        int temp[] = new int[high - low + 1];

        // Compare and store in temp array
        while (i <= mid && j <= high) {
            if (arr[i] < arr[j]) {
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
            }
        }

        // Copy remaining elements
        while (i <= mid) {
            temp[k++] = arr[i++];
        }
        while (j <= high) {
            temp[k++] = arr[j++];
        }

        // Copy temp[] back to arr[]
        for (i = 0; i < temp.length; i++) {
            arr[low + i] = temp[i];
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt(); // input size
        int arr[] = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt(); // input elements
        }

        mergeSort(arr, 0, n - 1); // sort

        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " "); // print sorted array
        }
    }
}
