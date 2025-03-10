// Q1. Create a dynamic stack using linked list having push pop display and exit option. Push will only work if the entered number is palindrome. Rest option will work normally.
// TEST CASE:
// Press:
// 1.	PUSH
// 2.	POP
// 3.	DISPLAY
// 4.	EXIT
// Push (120) nothing will happen 120 is not palindrome
// Push (121) it will push in the stack
// Rest option will work normally.

#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;

    node(int data)
    {
        this -> data = data;
        next = NULL;
    }
};

node *push(node *head, int data)
{
    node *ptr = new node(data);
    ptr -> next = head;
    head = ptr;

    return head;

}

node *pop(node *head)
{
    if(head==nullptr)
    {
        cout<<"\nStack Underflow\n";
        return head;
    }

    node *temp = head;

    head = head -> next;
    delete temp;

    return head;
}

void display(node *head)
{
    if(head == nullptr)
    {
        cout<<"\nLL is empty \n";
    }
    else
    {
        cout<<"\nLinked List : ";
    node *ptr= head;
    while(ptr != NULL)
    {
        cout<<ptr -> data<<" ";
        ptr = ptr-> next;
    } 
    }

}

int main()
{
    node *head = nullptr;
    
    cout<<"Press:\n";
    cout<<"1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n";

    while(1)
    {
        int choice;
        cout<<"\nEnter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
            int data;
            cout<<"Enter Data: ";
            cin>>data;

            int temp = data;
            int lastd;
            int res = 0;
            while(temp != 0)
            {
                lastd= temp%10;
                res = res * 10 + lastd;
                temp /= 10;
            }
            
            if(res == data)
            {
                head = push(head, data);
            }
            break;
            }

            case 2:
            
            head = pop(head);
            break;

            case 3:
            display(head);
            break;

            case 4:
            exit(0); 
        }
    }


    return 0;
}
