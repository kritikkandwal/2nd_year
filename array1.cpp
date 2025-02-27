#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int mid=sum/2;
    int sumnew=0;
    for(int i=0;i<n;i++){
        if(sumnew==mid){
            cout<<i+1;
        }
        sumnew=sumnew+arr[i];
    }

}