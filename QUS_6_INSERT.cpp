// Given the head of a Singly Linked List and a value x. The task is to insert the key in the middle of the linked list.


#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node(int data) {
        this->data = data;
        next = nullptr;
    }
};

node* insertion(node* head, int data) {
    node* n = new node(data);
    if (head == nullptr) {
        head = n;
        return head;
    }
    node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = n;
    return head;
}

node* midfunction(node* head, int val) {
    node* n = new node(val);
    if (head == nullptr) {
        // If the list is empty, simply insert the new node as the only element
        return n;
    }
    
    node* temp = head;
    int c = 0;
    while (temp != nullptr) {
        c++;
        temp = temp->next;
    }

    int mid = c / 2;
    node* help = head;
    for (int i = 0; i < mid - 1; i++) {
        help = help->next;
    }

    n->next = help->next;
    help->next = n;
    return head;
}

void display(node* head) {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    node* head = nullptr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        head = insertion(head, data);
    }
    display(head);
    
    int val;
    cout << "Enter value to add at middle: ";
    cin >> val;
    
    head = midfunction(head, val);
    display(head);
}
