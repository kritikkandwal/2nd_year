#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        //pattern
        int k=1;
        for(int j=0;j<=i;j++){
            cout<<k<<" ";
            k=k*(i-j)/(j+1);
        }
        cout<<endl;
    }
    int rowno;
    cout<<"input the rowno u need"<<endl;
    cin>>rowno;
    int k=1;
    for(int i=0;i<=rowno;i++){
        cout<<k;
        if(i<rowno) cout<<",";
        k=k*(rowno-i)/(i+1);
    }
}