#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int value) : data(value),left(nullptr),right(nullptr){}
};

Node* insert(Node* root,int value)
{
    if(root==nullptr)
    {
        return new Node(value);
    }
    else if(value>root->data)
    {
        root->right =insert(root->right,value);
    }
    return root;
}


void inorderTraversal(Node* root)
{
    if(root!=nullptr)
    {
        inorderTraversal(root->left);
        cout<<root->data<<" ";
        inorderTraversal(root->right);
    }
}

void preorderTraversal(Node* root)
{
    if(root!=nullptr)
    {
        cout<<root->data<<" ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}


void postorderTraversal(Node* root)
{
    if(root!=nullptr)
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout<<root->data<<" ";   
    }
}

bool search(Node* root,int value)
{
    if(root==nullptr)
    {
        return false;
    }

    if(root->data==value)
    {
        return true;
    }
    else if(value<root->data)
    {
        return search(root->left,value);
    }
    else
    {
        return search(root->right,value);
    }
}

Node* findMin(Node* root)
{
    while(root->left !=nullptr)
    {
        root=root->left;
    }
    return root;
}

Node* deleteNode(Node* root,int val)
{
    if(root==nullptr)
    {
        return root;
    }
    if(val<root->data)
    {
        root->left = deleteNode(root->left,val);
    }
}