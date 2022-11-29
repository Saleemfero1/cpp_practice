#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
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
//------------------------tree Creation------------------------------
void Creation(node *&root, int data)
{
    if (root == NULL)
    {
        root = new node(data);
        return;
    }

    if (data <= root->data)
    {
        Creation(root->left, data);
    }
    else
    {
        Creation(root->right, data);
    }
}

void createTree(node *&root)
{
    int data;
    cout << "Enter the data : ";
    cin >> data;

    while (data != -1)
    {
        Creation(root, data);
        cout << "Enter the data : ";
        cin >> data;
    }
}

//----------------------Searching for Element--------------------------
// Recursive Method 1:
bool searchTree(node *root, int key)
{
    if (root == NULL)
        return false;

    if (root->data == key)
        return true;

    if (key < root->data)
        searchTree(root->left, key);
    else
        searchTree(root->right, key);
}

// Iterative Method 2:
bool BinarySearch(node *root, int key)
{
    node *temp = root;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        else if (key < temp->data)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }
    return false;
}
//-------------Find the minimum and maximum value from BST-------
int miniBst(node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp->data;
}

int maxiBst(node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp->data;
}

//-----------------sum of the leaf node in binary tree-------------
int sumOfLeafNode(node *root, int &sum)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
    {
        sum += root->data;
        cout << root->data << " ";
    }
    sumOfLeafNode(root->left, sum);
    sumOfLeafNode(root->right, sum);
    return sum;
}
//---------------------------Dsplay Tree-------------------------
//---------InOreder----------

void displayTree(node *root)
{
    if (root == NULL)
    {
        return;
    }
    displayTree(root->left);
    cout << root->data << " ";
    displayTree(root->right);
}

// delete key element from BST
node *deleteELement(node *&root, int key)
{
    if (root == NULL)
    {
        return root;
    }

    if (root->data == key)
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        if (root->left != NULL && root->right == NULL)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }
        if (root->left == NULL && root->right != NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }
        if (root->left != NULL && root->right != NULL)
        {
            int mini = miniBst(root->right);
            root->data = mini;
            root->right = deleteELement(root->right, mini);
            return root;
        }
    }
    if (key < root->data)
    {
        root->left = deleteELement(root->left, key);
        return root;
    }
    else
    {
        root->right = deleteELement(root->right, key);
        return root;
    }
}

void levelOreder(node *root)
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
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << "  ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
//------------------------------------driver code------------------------------
int main()
{
    node *root = NULL;
    // crearte BST
    createTree(root);
    // display BST in inorder bcz BST in inoreder it shows in sorted manner
    displayTree(root);
    cout << endl
         << endl;
    levelOreder(root);
    cout << endl
         << endl;
    root = deleteELement(root,3);
    levelOreder(root);
    cout << endl
         << endl;
    displayTree(root);
     cout<<endl;
    //sum of leaf node in bst
    int sum = 0;
     cout<<"sum of leaf node in BST : "<<sumOfLeafNode(root,sum)<<endl;
    // //find the mini value in BST
    // cout<<"minimum value in BST : "<<miniBst(root)<<endl;
    // //find the maximum value in BST
    // cout<<"maximum value in BST : "<<maxiBst(root)<<endl;

    // //Searching Element in BST
    // for(int i = 0;i<2;i++){
    // int key;
    // cout<<"Enter key to search ";
    // cin>>key;
    // if(BinarySearch(root,key)){
    //     cout<<"key is found.."<<endl;
    // }else{
    //     cout<<"key is not find.."<<endl;
    // }

    // }
    return 0;
}