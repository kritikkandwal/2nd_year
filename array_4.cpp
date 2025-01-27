#include<iostream>
using namespace std;

void twoSumIndices(int nums[], int n, int target, int result[2]) {
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) { // start j from i + 1 to avoid using the same element twice
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return;
            }
        }
    }
    // If no solution is found, initialize result with -1, -1
    result[0] = -1;
    result[1] = -1;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    int nums[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int target;
    cout << "Enter the target value: ";
    cin >> target;
    
    int result[2];
    twoSumIndices(nums, n, target, result);
    
    if (result[0] != -1) {
        cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
