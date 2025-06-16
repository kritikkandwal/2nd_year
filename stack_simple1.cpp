#include <iostream>
#include <stack> // Include the stack library
using namespace std;

int main() {
    stack<int> st; // Declare a stack of integers

    // Pushing elements onto the stack
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    // Display and pop elements from the stack
    while (!st.empty()) {
        cout << st.top() << " "; // Display the top element
        st.pop();                // Remove the top element
    }
    cout << endl;

    return 0; // Indicate successful completion
}
