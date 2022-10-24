#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//node creation 
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
//build tree 
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
//traverse tree using level order
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
//----------build ur function----------------------------
//-----------------vertical problem---------------