#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 2, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> freq;

    // Count occurrences of each element
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Print duplicate elements
    cout << "Duplicate elements: ";
    for (auto it : freq) {
        if (it.second > 1) { // If count > 1, it's a duplicate
            cout << it.first << " ";
        }
    }

    return 0;
}
