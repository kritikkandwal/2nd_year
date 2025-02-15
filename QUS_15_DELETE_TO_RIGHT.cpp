// Given a singly linked list, remove all nodes that have a node with a greater value anywhere to their right in the list. Return the head of the modified linked list.


#include<iostream>
using namespace std;


struct node{
    int data;
    node*next;
    node(int data){
        this->data=data;
        next=nullptr;
    }
};

node*insertion(node*head,int data){
    node*n=new node(data);
    while(head==nullptr){
        return n;
    }
    node*temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=n;
    return head;
}

node*greatervalueright(node*head){
    node*temp=head;
    node*maxnode=head;
    node*prev=nullptr;
    while(temp->next!=nullptr){
        if(temp->data<temp->next->data){
            delete temp;
            temp=temp->next;
        }
    }
    return head;
}



void display(node*head){
    node*temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main(){
    node*head=nullptr;
    int n;
    cout<<"enter the size"<<" ";
    cin>>n;
    for(int i=0;i<n;i++) {
        int data;
        cin>>data;
        head=insertion(head,data);
    }
    display(head);
}