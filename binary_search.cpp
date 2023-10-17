#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int value)
{
    if (root == nullptr)
    {
        return new Node(value);
    }
    else if (value > root->data)
    {
        root->right = insert(root->right, value);
    }
    else if (value < root->data)
    {
        root->left = insert(root->left, value);
    }
    return root;
}

void inorderTraversal(Node* root)
{
    if (root != nullptr)
    {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

void preorderTraversal(Node* root)
{
    if (root != nullptr)
    {
        cout << root->data << " ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void postorderTraversal(Node* root)
{
    if (root != nullptr)
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout << root->data << " ";
    }
}

Node* search(Node* root, int value)
{
    if (root == nullptr || root->data == value)
    {
        return root;
    }

    if (value < root->data)
    {
        return search(root->left, value);
    }

    return search(root->right, value);
}

Node* findMin(Node* root)
{
    while (root->left != nullptr)
    {
        root = root->left;
    }
    return root;
}

Node* deleteNode(Node* root, int data)
{
    if (root == NULL)
    {
        return root;
    }

    if (data < root->data)
    {
        root->left = deleteNode(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = deleteNode(root->right, data);
    }
    else
    {
        if (root->left == NULL)
        {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int main()
{
    Node* root = nullptr; // Initialize the root as nullptr

    root = insert(root, 1);
    insert(root, 2);
    insert(root, 3);
    insert(root, 4);

    cout << "Preorder traversal: ";
    preorderTraversal(root);
    cout << endl;

    cout << "Inorder traversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Postorder traversal: ";
    postorderTraversal(root);
    cout << endl;

    int searchData = 3;
    Node* result = search(root, searchData);
    if (result)
    {
        cout << searchData << " found in the tree." << endl;
    }
    else
    {
        cout << searchData << " not found in the tree." << endl;
    }

    int deleteData = 2;
    root = deleteNode(root, deleteData);
    cout << "Inorder traversal after deleting " << deleteData << ": ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}