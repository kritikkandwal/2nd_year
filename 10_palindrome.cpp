#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int arr[n];

    cout<<"Enter values:\n";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int arr2[n];

    for(int i=0; i<n; i++)
    {
        arr2[i]=arr[n-i-1];

    }

    int f=1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=arr2[i])
        {
            f=0;
            break;
        }
    }

    if(f==1)
    {
        cout<<"Array is palindrome";
    }
    else
    {
        cout<<"Array is not palindrome";
    }
    

    return 0;
}