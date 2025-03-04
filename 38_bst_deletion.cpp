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
    node *ptr = new node(data);
    if(root == nullptr)
    {
        root = ptr;
    }
    else if(data < root -> data)
    {
        root -> left = insert(root -> left, data);
    }
    else if(data > root -> data)
    {
        root -> right = insert(root -> right, data);
    }

    return root;
}

node *inorder_precedor(node *ptr)
{
    ptr = ptr -> right;
    while(ptr != NULL && ptr -> left != NULL)
    {
        ptr = ptr -> left;
    }

    return ptr;
}


node *deletee(node *root, int element)
{
    if(root == nullptr)
    {
        return root;
    }
    else if(element < root -> data)
    {
        root -> left = deletee(root -> left, element);
    }
    else if(element > root -> data)
    {
        root -> right = deletee(root -> right, element);
    }
    else
    {
        if(root -> right == NULL)
        {
            node *temp = root -> left;
            delete root;
            return temp;
        }
        if(root -> left == NULL)
        {
            node *temp = root -> right;
            delete root;
            return temp;
        }
        node *p = inorder_precedor(root);
        root -> data = p-> data;
        root -> right = deletee(root -> right, p->data);

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
    cout<<root -> data<<" ";
    inorder(root -> right);

}

int main()
{
    node *root = nullptr;

    int size;
    cout<<"Enter size: ";
    cin>>size;

    cout<<"Enter "<<size<<" elements:\n";
    for(int i=0; i<size; i++)
    {
        int element;
        cin>>element;
        root = insert(root,element);
    }

    cout<<"Inorder: ";
    inorder(root);

    int element;
    cout<<"\nEnter element to delete: ";
    cin>>element;

    root = deletee(root, element);

    cout<<"Inorder After Deletion: ";
    inorder(root);

    return 0;
}