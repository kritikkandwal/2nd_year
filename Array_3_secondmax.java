import java.util.*;
class Array_3_secondmax{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int max=arr[0];
        int min=arr[0];
        for(int i=0;i<n;i++){
            if(max<arr[i]){
                max=arr[i];
            }
            if(min>arr[i]){
                min=arr[i];
            }
        }
        int secondmax=arr[0];
        int secondmin=arr[0];
        boolean foundSecondMax = false, foundSecondMin = false;

        for(int i=0;i<n;i++){
            if(secondmax<arr[i] && arr[i]!=max){
                secondmax=arr[i];
                foundSecondMax = true;
            }
            if (arr[i] < secondmin && arr[i] != min) {
                secondmin = arr[i];
                foundSecondMin = true;
            }
        }
        if (!foundSecondMax) {
            System.out.println("No second largest element found.");
        } else {
            System.out.println("Second Largest: " + secondmax);
        }

        if (!foundSecondMin) {
            System.out.println("No second smallest element found.");
        } else {
            System.out.println("Second Smallest: " + secondmin);
        }
        
    }
}


