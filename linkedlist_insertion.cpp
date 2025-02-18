#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;

    // Constructor to initialize node
    node(int val) {
        data = val;
        next = nullptr;
    }
};

// Function to insert at the end
node* insertion(node* head, int data) {
    node* n = new node(data);
    if (head == nullptr) { // Handle empty list
        return n;
    }
    node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = n;
    return head;
}

// Function to display the linked list
void display(node* head) {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to insert at head
node* insertAtHead(node* head, int val) {
    node* n = new node(val);
    n->next = head;
    return n;
}

// Function to insert at the end
node* insertAtLast(node* head, int val) {
    return insertion(head, val);
}

// Function to insert at a specific index
node* insertAtIndex(node* head, int val, int index) {
    if (index == 0) {
        return insertAtHead(head, val);
    }
    node* n = new node(val);
    node* temp = head;
    for (int i = 0; i < index - 1; i++) {
        if (temp == nullptr || temp->next == nullptr) { // Out-of-bounds check
            cout << "Index out of bounds." << endl;
            return head;
        }
        temp = temp->next;
    }
    n->next = temp->next;
    temp->next = n;
    return head;
}

int main() {
    node* head = nullptr;
    int n;

    cout << "Enter the size: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        head = insertion(head, data);
    }

    cout << "Initial list: ";
    display(head);

    // Insertion operations
    head = insertAtHead(head, 0);  
    head = insertAtLast(head, 250);  
    head = insertAtIndex(head, 69, 1); 

    cout << "Modified list: ";
    display(head);

    return 0;
}
