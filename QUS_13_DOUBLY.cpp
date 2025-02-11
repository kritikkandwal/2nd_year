#include<iostream>
using namespace std;

struct node{
    int data;
    node*next;
    node*prev;
    node(int data){
        this->data=data;
        next=nullptr;
        prev=nullptr;
    }
};

void display(node*head){
    node*temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

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
    n->prev=temp;
    return head;
}

node*insertathead(node*head,int data){
    node*n=new node(data);
    n->next=head;
    if(head!=nullptr){
        head->prev=n;
    }
    return n;
}

node*insertatend(node*head,int data){
    return insertion(head,data);
}


node*insertatindex(node*head,int data,int index){
    if(index==0){
        return insertathead(head,data);
    }
    node*n=new node(data);
    node*temp=head;
    for(int i=0;i<index-1;i++){
        if(temp==nullptr || temp->next==nullptr){
            cout<<"index out of bound";
            return head;
        }
        temp=temp->next;
    }
    n->next=temp->next;
    if(temp->next!=nullptr){
        temp->next->prev=n;
    }
    temp->next=n;
    n->prev=temp;
    return head;
}

node*deletionathead(node*head){
    if(head==nullptr){
        return nullptr;
    }
    node*temp=head;
    head=head->next;
    delete temp;
    return head;
}

node*deletionatend(node*head){
    if(head==nullptr || head->next==nullptr){
        delete head;
        return nullptr;
    }
    node*temp=head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;

}


node*deletionatindex(node*head,int index){
    if (index == 0) {
        return deletionathead(head);
    }
    node* temp = head;
    for (int i = 0; i < index - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }
    if (temp == nullptr || temp->next == nullptr) {
        cout << "Index out of bounds." << endl;
        return head;
    }
    node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
    return head;
}

int main(){
    node*head=nullptr;
    int n;
    cout<<"enter soize";
    cin>>n;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        head=insertion(head,data);
    }
    cout<<"original";
    display(head);
    head=insertathead(head,100);
    head=insertatend(head,1000);
    head=insertatindex(head,5000,3);
    cout<<"after upodation of insertion";


    display(head);

    // Deletion operations
    cout << "Deleting at head..." << endl;
    head = deletionathead(head);
    display(head);

    cout << "Deleting at end..." << endl;
    head = deletionatend(head);
    display(head);

    cout << "Deleting at index 2..." << endl;
    head = deletionatindex(head, 2);
    display(head);
}