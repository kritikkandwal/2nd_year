#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;

};

void display(node *ptr)
{
    while(ptr != NULL)
    {
        cout<<ptr -> data<<" ";
        ptr=ptr -> next;
    }
}

int main()
{
    node *first,*second,*third;

    first=(node *)malloc(sizeof(node));
    second=(node *)malloc(sizeof(node));
    third=(node *)malloc(sizeof(node));

    first -> data=50;
    first -> next = second;
    second -> data=100;
    second -> next = third;
    third -> data=150;
    third -> next = NULL;

    display(first);

    return 0;
}