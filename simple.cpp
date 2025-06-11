#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int index;
    // cin>>index;
    
    for(int i=0;i<n;i++){
        if(arr[i]==3){
            index=i;
        }
    }
    for(int i=0;i<=index;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"L"<<" ";
    for(int i=index+1;i<n;i++){
        cout<<arr[i]<<" ";
    }
}