import java.util.*;
class merge{
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter size of first array");
        int n=sc.nextInt();
        int[] arr1=new int[n];
        System.out.println("enter size of second array");
        int m=sc.nextInt();
        int[] arr2=new int[m];
        for(int i=0;i<n;i++){
            arr1[i]=sc.nextInt();
        }
        for(int i=0;i<m;i++){
            arr2[i]=sc.nextInt();
        }
        int k=m+n;
        int[] NEW=new int[k];
        for(int i=0;i<n;i++){
            NEW[i]=arr1[i];
        }
        for(int i=0;i<m;i++){
            NEW[n+i]=arr2[i];
        }
        for(int i=0;i<k;i++){
            System.out.print(NEW[i]+" ");
        }
    }
}