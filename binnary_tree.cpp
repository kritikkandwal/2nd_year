
#include<iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data=data;
        left=right=NULL;
    }
};
node *insert(node*root,int data)
{
    node *n=new node (data);
    if(root==nullptr)
    {
        root=n;
        return root;
    }
    if(data<root->data)
    {
        root->left=insert(root->left,data);
    }
    else 
    {
        root->right=insert(root->right,data);
    }
    return root;
}

void inorder(node * root)
{
    if(root==nullptr)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(node * root)
{
    if(root==nullptr)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}
void preorder(node* root){
    if(root==nullptr){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    node *root=nullptr;
    for(int i=0;i<5;i++)
    {
        int data;
        cin>>data;
        root=insert(root,data);
    }
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    preorder(root);

return 0;
}