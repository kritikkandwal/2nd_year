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

// Function to insert a node at the end
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

// Function to delete the node given only a pointer to it
void mainn(node* pointer) {
if (pointer == nullptr || pointer->next == nullptr) {
    cout << "Cannot delete the last node using this method." << endl;
    return;
}
// Copy the data from the next node to the current node
node* temp = pointer->next;
pointer->data = temp->data;
pointer->next = temp->next;
// Delete the next node
delete temp;
}

// Function to find a node at a given index
node* getNodeAtIndex(node* head, int index) {
    node* temp = head;
    int count = 0;
    while (temp != nullptr && count < index) {
        temp = temp->next;
        count++;
    }
    return temp; // Returns nullptr if index is out of bounds
}

// Function to print the linked list
void printList(node* head) {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
node* head = nullptr;
int n;
cout << "Enter size: ";
cin >> n;
cout << "Enter elements: ";
for (int i = 0; i < n; i++) {
    int data;
    cin >> data;
    head = insertion(head, data);
}
cout << "Enter index of node to delete: ";
int index;
cin >> index;
node* nodeToDelete = getNodeAtIndex(head, index);
if (nodeToDelete == nullptr || nodeToDelete->next == nullptr) {
    cout << "Invalid node selection. Cannot delete." << endl;
} else {
    mainn(nodeToDelete);
}
cout << "Updated List: ";
printList(head);
return 0;
}
