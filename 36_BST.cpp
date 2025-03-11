#include<iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this -> data = data;
        left = right = NULL;
    }
};

node *insert(node *root, int data)
{
    node *ptr  = new node(data);
    if(root == nullptr)
    {
        root = ptr;
    }
    else if(data < root -> data )
    {
        root -> left = insert(root -> left, data);
    }
    else if(data > root -> data )
    {
        root -> right = insert(root -> right, data);
    }

    return root;
    
}

void inorder(node *root)
{
    if(root == nullptr)
    {
        return;
    }
    inorder(root -> left);
    cout<<root -> data <<" ";
    inorder(root -> right);
}

void preorder(node *root)
{
    if(root == nullptr)
    {
        return;
    }
    cout<<root -> data <<" ";
    preorder(root -> left);
    preorder(root -> right);
}

void postorder(node *root)
{
    if(root == nullptr)
    {
        return;
    }
    postorder(root -> left);
    postorder(root -> right);
    cout<<root -> data <<" ";
    
}

int main()
{

    node *root = nullptr;
    cout<<"Enter the size: ";
    int size;
    cin>>size;

    for(int i=0; i<size; i++)
    {
        int element;
        cin>>element;
        root = insert(root, element);
        
    }

    cout<<"Inorder: ";
    inorder(root);
    cout<<"\nPreorder: ";
    preorder(root);
    cout<<"\nPostorder: ";
    postorder(root);

    return 0;
}