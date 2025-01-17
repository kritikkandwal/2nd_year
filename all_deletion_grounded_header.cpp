// deletion & insertion grounded header
#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
node*insertAthead(node*header,int val){
    node*n=new node(val);
    n->next=header->next;
    header->next=n;
    header->data++;
    return header;
}
node*insertAtend(node*header,int val){
    node*n=new node(val);
    node*temp=header->next;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    header->data++;
    return header;
}
node*insertAtindex(node*header,int val,int index){
    node*n=new node(val);
    node*temp=header->next;
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
node*deletionAthead(node*header){
    node*temp=header->next;
    node*todelete=temp;
    header->next=temp->next;
    delete todelete;
    header->data--;
    return header;
}
node*deletionAtend(node*header){
    node*temp=header->next;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    node* lastNode = temp->next;
    temp->next=NULL;
    delete lastNode;
    header->data--;
    return header;
}
node*deletionAtindex(node*header,int index){
    node*temp=header->next;
    for(int i=0;i<index-2;i++){
        temp=temp->next;
    }
    node*todelete=temp->next;
    temp->next=todelete->next;
    delete todelete;
    header->data--;
    return header;
}
int main(){
    node*header=new node(0);
    header=insertAthead(header,5);
    header=insertAthead(header,4);
    header=insertAthead(header,3);
    header=insertAthead(header,2);
    header=insertAthead(header,1);
    header=insertAtend(header,100);
    header=insertAtindex(header,150,2);
    display(header);
    cout<<endl<<header->data;
    // NOW DELETION
    cout<<endl;
    header=deletionAthead(header);
    header=deletionAtend(header);
    header=deletionAtindex(header,2);
    display(header);
    cout<<endl<<header->data;

}