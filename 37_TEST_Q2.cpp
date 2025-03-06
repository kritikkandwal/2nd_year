// Q2. Create a circular queue using array with options for enqueue, dequeue, display, and exit. Enqueue, dequeue & exit will work normally but when display function is called next prime number of the element present in queue is displayed.
//   TEST CASE:
// If after enqueue and dequeue when display is press elements in linked are 4 6 20 27 
// Then output will be 5 7 23 29

#include<iostream>
using namespace std;

#define size 5
int queue[size];
int front = -1;
int rear = -1;

void enqueue(int data)
{
    if(front == 0 && rear == size-1 || front == rear + 1)
    {
        cout<<"\nQueue Overflow: \n";
    }
    else if(front == -1)
    {
        front = rear = 0;
        queue[rear] = data;
    }
    else
    {
        rear = (rear + 1)%size;
        queue[rear] = data;
    }
}

void dequeue()
{
    if(front == -1)
    {
        cout<<"\nUnderflow\n";
    }

    else if(rear == front)
    {
        rear = front = -1;
    }
    front = (front + 1)%size ;
    
}

void prime(int last)
{
    int flag = 1;
    for(int i=2; i <= last/2; i++)
    {
        if(last % i == 0)
        {
            flag = 0;
        }
    }
    if(flag == 0)
    {
        prime(last+1);
    }
    else
    {
        enqueue(last);
    }
}

void display()
{
    int last=0;
    if(front  == -1)
    {
        cout<<"\nEmpty Queue\n";
    }
    else if(front < rear)
    {
        for(int i = front; i <= rear; i++)
        {
            last = queue[i] + 1;
            prime(last);
        }
        
        
    }
    else if(front > rear)
    {
        for(int i=front; i< size; i++)
        {
            
        }
        for(int i= 0; i<= rear; i++)
        {
            
            last = queue[i] + 1;
            prime(last);
        }
        
    }
    
}

int main()
{
    
    cout<<"Press:\n";
    cout<<"1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";

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

                enqueue(data);
                break;

            }
            case 2:
            {
                dequeue();
                break;
            }
            case 3:
            {
                display(head);
                
                break;
            }
            case 4:
            {
                exit(0);
            }
        }
    }

    return 0;
}