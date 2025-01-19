//insertion grounded header

#include<iostream>
using namespace std;
struct node{
    int data;
    struct node * next;

    node(int val){
        data=val;
        next=NULL;
    }
};
    node* insertAtHead(node*header,int val){
        node *n=new node(val);
        n->next=header->next;
        header->next=n;
        header->data++;
        return header;
    }
    
    node*insertAtend(node*header,int val){
        node*n=new node(val);
        node*temp=header;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
        header->data++;
        return header;
    }
    node*insertatindex(node*header,int val,int index){
        node*n=new node(val);
        node*temp=header;
        for(int i=0;i<index-1;i++){
            temp=temp->next;
        }
        n->next=temp->next;
        temp->next=n;
        header->data++;
        return header;
    }
    void display(node*header){
        node*temp=header->next;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }
int main(){
    node* header=new node(0);
    header = insertAtHead(header, 4);
    header = insertAtHead(header, 3);
    header = insertAtHead(header, 2);
    header = insertAtHead(header, 1);
    display(header);
    header = insertAtend(header,5);
    cout<<endl;
    display(header);
    header = insertatindex(header,69,1);
    cout<<endl;
    display(header);
}