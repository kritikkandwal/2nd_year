#include<iostream>
using namespace std;

int binary_search(int arr[],int n,int key)
{
    int start=0, end=n-1;
    

    while(start<=end)
    {
        int mid=(start+end)/2;

        if(arr[mid]==key)
        {
            return 1;
        }

        else if(arr[mid]>key)
        {
            end=mid-1;
        }

        else
        {
            start=mid+1;
        }
    }
    return -1;

}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int arr[n];

    cout<<"Enter values: \n";

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"ENter element to find: ";
    cin>>key;

    int f=binary_search(arr,n,key);
    
    if(f==1)
    {
        cout<<"Element Found";
    }

    else{
        cout<<"Element Not Found";
    }


    return 0;
}
