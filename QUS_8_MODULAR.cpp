// Given the head of a Singly Linked List and a number k, the task is to find the modular node of the linked list. If no such index is present return -1.

// A modular node is defined as the last node in the linked list whose index is divisible by k (i%k==0). 

// Note: 1-based indexing is followed

#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node(int data) {
        this->data = data;
        next = NULL;
    }
};

node* insertion(node* head, int data) {
    node* n = new node(data);
    node* temp = head;
    if (head == nullptr) {
        return n;
    }
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = n;
    return head;
}

node* insertionatend(node* head, int add) {
    return insertion(head, add);
}

void display(node* head) {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int findModularNode(node* head, int k) {
    if (head == nullptr || k <= 0) {
        return -1; // No modular node if the list is empty or k is non-positive
    }

    node* modularNode = nullptr;
    int index = 1; // 1-based indexing
    node* temp = head;

    while (temp != nullptr) {
        if (index % k == 0) {
            modularNode = temp; // Update the modular node
        }
        temp = temp->next;
        index++;
    }

    return modularNode ? modularNode->data : -1; // Return the data of the modular node or -1 if not found
}

int main() {
    node* head = nullptr;
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int data;
        cout << "Enter data for node " << (i + 1) << ": ";
        cin >> data;
        head = insertion(head, data);
    }
    
    int add;
    cout << "Enter data to add at end: ";
    cin >> add;
    head = insertionatend(head, add);
    
    cout << "Linked List: ";
    display(head);
    
    int k;
    cout << "Enter the value of k: ";
    cin >> k;
    int modularNodeData = findModularNode(head, k);
    cout << "Modular node data: " << modularNodeData << endl;

    return 0;
}