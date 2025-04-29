import java.util.Scanner;

class Node {
    int data;
    Node next;
    
      Node(int data) {
        this.data = data;
        this.next = null;
    }
}
class qus_1 {
    
    static Node insertion(Node head, int data) {
        Node newNode = new Node(data);
        if (head == null) {
            return newNode;
        }
        Node temp = head;
        while (temp.next != null) {
            temp = temp.next;
        }
        temp.next = newNode;
        return head;
    }
    
    static Node insertionAtEnd(Node head, int add) {
        return insertion(head, add);
    }
    
    static void display(Node head) {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println();
      }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Node head = null;
        
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            int data = sc.nextInt();
            head = insertion(head, data);
        }
        
        System.out.println("Enter data to add at end:");
        int add = sc.nextInt();
        head = insertionAtEnd(head, add);
        
        display(head);
        
        sc.close();
    }
}
