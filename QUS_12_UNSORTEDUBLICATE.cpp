#include <iostream>
#include <vector>
#include <algorithm> // For std::sort
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
        return n;
    }
    node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = n;
    return head;
}

void sortLinkedList(node* head) {
    if (head == nullptr || head->next == nullptr) {
        return; // List is empty or has one element
    }

    // Extract elements from the linked list into an array
    vector<int> arr;
    node* temp = head;
    while (temp != nullptr) {
        arr.push_back(temp->data);
        temp = temp->next;
    }

    // Sort the array
    sort(arr.begin(), arr.end());

    // Put the sorted elements back into the linked list
    temp = head;
    for (int i = 0; i < arr.size(); i++) {
        temp->data = arr[i];
        temp = temp->next;
    }
}

void removedublicate(node*head){
    if(head==nullptr || head->next==nullptr) return;
    node*current=head;
    while(current!=nullptr && current->next!=nullptr){
        if(current->data==current->next->data){
            node*dublicate=current->next;
            current->next=current->next->next;
            delete dublicate;
        }
        else{
                current=current->next;
            }
    }
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
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        head = insertion(head, data);
    }

    cout << "Original list: ";
    display(head);

    sortLinkedList(head);

    cout << "Sorted list: ";
    display(head);

    removedublicate(head);
    cout<<"after remove dublicate";
    display(head);

    return 0;
}
