// Given the head of a Singly Linked List and a value x, insert that value x at the end of the LinkedList and return the modified Linked List.


#include<iostream>
using namespace std;

struct node{
    int data;
    node*next;
    node(int data){
        this->data=data;
        next=NULL;
    }
};
node*insertion(node*head,int data){
    node*n=new node(data);
    node*temp=head;
    if(head==nullptr){
        return n;
    }
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=n;
    return head;
}
node*insertionatend(node*head,int add){
    return insertion(head,add);
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
cin>>n;
for(int i=0;i<n;i++){
    int data;
    cin>>data;
    head=insertion(head,data);
}
int add;
cout<<"enter data to add at end";
cin>>add;
head=insertionatend(head,add);
display(head);
}