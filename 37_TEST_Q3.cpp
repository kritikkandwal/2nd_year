// Q4. Create a binary search tree for array having elements int arr [12]={21,12,45,64,21,17,7,14,10,15,12,8} by first removing duplicate 
// elements from the array and the performing insertion by taking elements from array also print inorder, preorder, postorder. Also write a 
// function to search an element within tree.

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

int arr1 [12]={21,12,45,64,21,17,7,14,10,15,12,8};
int arr2[12];

void removedup()
{
    for(int i=0; i<12; i++)
    {
        arr2[i]=0;
    }
    int size=0;
    for(int i=0; i<12; i++)
    {
        int flag=1;
        for(int j=0; j<=i; j++)
        {
            if(arr1[i] == arr2[j])
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            arr2[size]=arr1[i];
            size++;
        }
    }

    for(int i=0; i<size; i++)
    {
        cout<<arr2[i]<<" ";
    }

}

node *root()

int main()
{
    removedup();
    node *root = arr2[0];

    create_tree(root);


    return 0;
}











