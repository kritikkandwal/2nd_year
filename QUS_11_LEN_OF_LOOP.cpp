#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
    node(int data) {
        this->data = data;
        next = nullptr;
    }
};

// Function to insert a new node at the end of the list
node *insertion(node *head, int data) {
    node *n = new node(data);
    if (head == nullptr) {
        return n;
    }
    node *temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = n;
    return head;
}

// Function to detect a loop and count the number of nodes in the loop
int detectLoop(node *head) {
    node *slow = head, *fast = head;

    // Detect if a loop exists
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        // If slow meets fast, a loop exists
        if (slow == fast) {
            // Count the number of nodes in the loop
            int loopCount = 1;
            node *current = slow;
            while (current->next != slow) {
                loopCount++;
                current = current->next;
            }
            return loopCount;
        }
    }
    return 0; // No loop detected
}

int main() {
    node *head = nullptr;
    int n;
    cout << "Enter the size of the linked list: ";
    cin >> n;

    cout << "Enter the elements of the linked list: ";
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        head = insertion(head, data);
    }

    // Creating a loop manually for testing (optional)
    cout << "Enter the position to create a loop (0 for no loop): ";
    int pos;
    cin >> pos;
    if (pos > 0) {
        node *temp = head, *loopNode = nullptr;
        int count = 1;
        while (temp->next != nullptr) {
            if (count == pos) {
                loopNode = temp;
            }
            temp = temp->next;
            count++;
        }
        temp->next = loopNode; // Create the loop
    }

    // Detect loop and count its size
    int loopSize = detectLoop(head);
    if (loopSize > 0) {
        cout << "Loop detected with " << loopSize << " nodes." << endl;
    } else {
        cout << "No loop detected." << endl;
    }

    return 0;
}
