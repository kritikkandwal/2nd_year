#include<iostream>
using namespace std;

void sort(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"\t";
    }

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

    sort(arr,n);


    return 0;
}