// Given a singly linked list of integers. The task is to check if the given linked list is palindrome or not.
import java.util.*;
class Qus_2{
    
    
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);{
            int n=sc.nextInt();
            Node head=null;
            for(int i=0;i<n;i++){
                int data=sc.nextInt();
                head=insertion(head,data);
            }
            display(head);
        }
    }
}