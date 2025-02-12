#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node(int data) {
        this->data = data;
        next = nullptr;
    }
};

// Function to insert a node at the end of the list
node* insertion(node* head, int data) {
    node* n = new node(data);
    if (head == nullptr) {
        return n;
    }
    node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = n;
    return head;
}

// Function to merge two sorted linked lists
node* mergelist(node* List1, node* List2) {
    node* dummy = new node(0); // Corrected dummy node initialization
    node* curr = dummy;

    while (List1 && List2) {
        if (List1->data < List2->data) {
            curr->next = List1;
            List1 = List1->next;
        } else {
            curr->next = List2;
            List2 = List2->next;
        }
        curr = curr->next; // Move the current pointer forward
    }

    if (List1) curr->next = List1;
    if (List2) curr->next = List2;

    return dummy->next; // Return the merged list, skipping dummy node
}

// Function to print the linked list
void printList(node* head) {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    node* head1 = nullptr;
    node* head2 = nullptr;
    int n, m;

    cout << "Enter size of first linked list: ";
    cin >> n;
    cout << "Enter elements of first linked list: ";
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        head1 = insertion(head1, data);
    }

    cout << "Enter size of second linked list: ";
    cin >> m;
    cout << "Enter elements of second linked list: ";
    for (int i = 0; i < m; i++) {  // Fixed loop condition
        int data;
        cin >> data;
        head2 = insertion(head2, data);
    }

    node* mergedHead = mergelist(head1, head2);

    cout << "Merged Sorted List: ";
    printList(mergedHead);

    return 0;
}
