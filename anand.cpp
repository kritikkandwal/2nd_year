#include<iostream>
#include<algorithm>
using namespace std;
void heapify(int arr[],int n,int i){
    int parent =i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && arr[parent]<arr[left]){
        parent=left;
    }
    if(right<n && arr[parent]<arr[right]){
        parent=right;
    }
    if(parent!=i){
        swap(arr[parent],arr[i]);
        heapify(arr,n,parent);
    }
}
void build(int arr[],int n){
    for(int i= n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    build(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

}