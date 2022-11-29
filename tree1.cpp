#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    int data;
    cout << " Enter the data : ";
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "data for left child [" << root->data << "] ";
    root->left = buildTree(root->left);
    cout << "data for right child [" << root->data << "] ";
    root->right = buildTree(root->right);
    return root;
}

//inorder traversal
void inorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout <<root->data<<" ";
    inorder(root->right);
    return;
}

//preOrder traversal
void preOrder(node *root)
{
    if (root == NULL)
        return;
    cout <<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
    return;
}

//postOrder traversal
void postOrder(node *root)
{
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout <<root->data<<" ";
    return;
}

//travers tree using levelOrder
void levelOrder(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
                q.push(NULL);
        }
        else{
            cout<<" "<<temp->data;
            if (temp->left)
            q.push(temp->left);
            if (temp->right)
            q.push(temp->right);
        }  
    }
}

//build tree using level order
node *buildTreeLevelOrder(node* root){
    queue<node*>q;
    int data;
    cout<<"Enter the data for root node :";
    cin>>data;
    root = new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        int leftdata;
        cout<<"Enter the data for left child of "<<temp->data<<" :";
        cin>>leftdata;
        if(leftdata!=-1){
        temp->left = new node(leftdata);
        q.push(temp->left);
        }

        int rightdata;
        cout<<"Enter the data for right child of "<<temp->data<<" :";
        cin>> rightdata;
        if(rightdata!=-1){
        temp->right=new node(rightdata);
        q.push(temp->right);
        }
    }
    return root;
}  
int main()
{
    node *root = NULL;
    root = buildTreeLevelOrder(root);
    cout << "inorder trversal" << endl;
    inorder(root);
    cout <<endl<< "preOrder trversal" << endl;
    preOrder(root);
    cout <<endl<< "postOrder trversal" << endl;
    postOrder(root);
    cout <<endl<< "Level Order Traversal" <<endl;
    levelOrder(root);
}