// Given a singly linked list of integers. The task is to check if the given linked list is palindrome or not.
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
    if(head==nullptr){
        return n;
    }
    node*temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=n;
    return head;
}

node*reverse(node*head){
    node*prev=nullptr;
    node*curr=head;
    node*next=nullptr;
    while(curr!=nullptr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
bool isPalindrome(node* originalHead, node* reversedHead) {
    node* temp1 = originalHead;
    node* temp2 = reversedHead;

    while (temp1 != nullptr && temp2 != nullptr) {
        if (temp1->data != temp2->data) {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return true;
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
    display(head);
    node*reversedHead=reverse(head);
    display(reversedHead);
    if (isPalindrome(head, reversedHead)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }
}