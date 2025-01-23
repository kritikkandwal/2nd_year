#include <iostream>

using namespace std;

int main()
{
    int arr[50], n;
    cout << "How many elements?" << endl;
    cin >> n;
    cout << "Enter the elements:" << endl;
    
    // Input array elements
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    // Removing duplicates
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                // Shift elements to the left
                for(int k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;  // Reduce array size
                j--;  // Decrement j to recheck the new element at position j
            }
        }
    }
    cout << "Array after removing duplicates: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
