// Ted, the computer science enthusiast, has accepted the challenge of writing a program that checks if the number of digits in an integer matches the sum of its digits.



// Guide Ted in designing and writing the code to solve this problem using a 'do-while' loop. 

// Input format :
// The input consists of an integer N, representing the number to be checked.

// Output format :
// If the sum is equal to the number of digits, print "The number of digits in N matches the sum of its digits."

// Else, print "The number of digits in N does not match the sum of its digits."



// Refer to the sample output for formatting specifications.

// Code constraints :
// 1 ≤ N ≤ 106

// Sample test cases :
// Input 1 :
// 20
// Output 1 :
// The number of digits in 20 matches the sum of its digits.
// Input 2 :
// 34
// Output 2 :
// The number of digits in 34 does not matc


// You are using Java
import java.util.*;
class Main{
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        int b=sc.nextInt();
        int c=b;
        int count=0;
        int sum=0;
        do{
            int r=c%10;
            sum=sum+r;
            count++;
            c=c/10;
            
        }
        while(c>0);
            if(count==sum){
                System.out.println("The number of digits in "+b+" matches the sum of its digits." );
            }
            else{
                System.out.println("The number of digits in "+b+" does not match the sum of its digits.");
            }
    }
}