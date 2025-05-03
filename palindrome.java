// import java.util.*;
// class palindrome{
//     public static void main(String[] args) {
//         Scanner sc=new Scanner(System.in);
//         String str=sc.nextLine();
//         int n=str.length();
//         boolean kk=true;
//         for(int i=0;i<n/2;i++){
//             if(str.charAt(i)!=str.charAt(n-1-i)){
//                 kk=false;
//                 break;
//             }
//         }
//         if(kk==true){
//             System.out.println("palindrome");
//         }
//         else{
//             System.out.println(" not palindrome");
//         }
//     }
// }


import java.util.*;
class palindrome{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();
        
        StringBuilder sb=new StringBuilder(str);
        String str2=sb.reverse().toString();
        if(str.equals(str2)){
            System.out.println("(Palindrome)");

        }
        else{
            System.out.println("ma chuda");
        }
    }
}


