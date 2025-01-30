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
void build_heap(int arr[],int n){
    for(int i= n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
}
int main()
{
    int n;
    cout<<"enter 1st size";
    cin>>n;
    int arr1[n];
    cout<<"enter 1st arry element";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    build_heap(arr1,n);
    int m;
    cout<<"enter 2nd size";
    cin>>m;
    int arr2[m];
    cout<<"enter 2nd arry element";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    build_heap(arr2,m);
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        cout<<arr2[i]<<" ";
    }
    //merging
    int arr3[m+n];
    for(int i=0;i<n;i++){
        arr3[i]=arr1[i];
    }
    for(int i=0;i<m;i++){
        arr3[i+n]=arr2[i];
    }   
    build_heap(arr3,n);
    for(int i=0;i<m+n;i++){
        cout<<arr3[i]<<" ";
    }

}