#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            arr[i]=arr[i+1];
        }
        else{
            arr[i]=-1;
        }
    }
    arr[n - 1] = -1; //ye last element to -1 he hoga na
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}