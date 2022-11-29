//love babbar first video cover----------------
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//------------------node creation-----------------------
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
//-------------------------tree creation-------------------------
node *buildTree(node *root)
{
    cout << "enter the data  ";
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
        return NULL;
    cout << "data for left child of" << root->data << endl;
    root->left = buildTree(root->left);
    cout << "for right  child of" << root->data << endl;
    root->right = buildTree(root->right);
    return root;
}
//-------------------------level order traversel----------------------------------
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
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
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
//-------------------------preorder traversal-----------------------------
void preOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << "  ";
    preOrder(root->left);
    preOrder(root->right);
}
//-------------------------Inorder traversal-----------------------------
void inOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << "  ";
    inOrder(root->right);
}
//-------------------------postorder traversal-----------------------------
void postOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << "  ";
}
//----------------------------------tree creation usin level oreder method -------------------------
void buildLevelOrder(node *&root)
{
    queue<node *> q;
    cout << "enter the data for root : ";
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "enter the left node for " << temp->data << endl;
        int leftdata;
        cin >> leftdata;
        if (leftdata != -1)
        {
            temp->left = new node(leftdata);
            q.push(temp->left);
        }

        cout << "enter the right node for " << temp->data << endl;
        int rightdata;
        cin >> rightdata;
        if (rightdata != -1)
        {
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
}
//-----------------------------------  heght of tree---------------------------
//problem no 1:
int height(node* root){
    if(root ==NULL){
        return 0;
    }
    int leftHeight=height(root->left);
    int rightHeight=height(root->right);
    int ans=max(leftHeight,rightHeight)+1;
    
    return ans;
}

//problem no : 2
//this is second method for diameter of tree or longest distance between two nodes
//time complexity is O(n) check second method below
pair<int,int>diameterFast(node* root){
    pair<int,int>p=make_pair(0,0);
    if(root==NULL){
        return p;
    }
    pair<int,int> left=diameterFast(root->left);
    pair<int,int> right=diameterFast(root->right);

    int op1 =left.first;
    int op2 =right.first;
    int op3 = left.second+ right.second+1;
    
    pair<int,int>ans;
    ans.first=max(op3,max(op1,op2));
    ans.second=max(left.second,right.second)+1;
    return ans;
}
int diameter(node* root){
    return diameterFast(root).first;
}

int main()
{    


    
    node *root = NULL;
    // creating tree;
    root = buildTree(root);

    // level order traversal
    cout << endl;
    levelOrder(root);

    cout << endl
         << "preoreder is : " << endl;
    preOrder(root);

    cout << endl
         << "Inoreder is : " << endl;
    inOrder(root);

    cout << endl
         << "Postoreder is : " << endl;
    postOrder(root);
    
    cout<<endl<<"Height of tree : "<<height(root)<<endl;

    cout<<"longest distance between two node or diameter of tree : "<<diameter(root)<<endl;
    // tree creation using leveloredr method --------------
    // buildLevelOrder(root);

    //intput tree
    // 1 2 3 -1 -1 4 -1 -1 5 -1 6 -1 7 8 9 -1 -1 10 -1 -1 11 -1 -1




//this second method it takes O(n2) time
//diameter of tree it means longest path between any two nodes present in ta tree
// int diameter(node* root){
//     if(root==NULL){
//         return 0;
//     }
//     cout<<" Node "<<root->data;     //all cout are not necessery this only for better 
//     int op1=diameter(root->left);   //understanding of recurssion 
//     cout<<" left "<<op1;            //recurssion karo left part ko
//     int op2=diameter(root->right);  // reccurssion karo right part ko
//     cout<<" right "<<op2;           //heght nikalo tree ka 
//     int op3=height(root->left)+height(root->right)+1;   //max nikalo 3 ka 
//     cout<<" heigt "<<height;            //jo max aayega return karo 
//     int ans = max(op3,max(op1,op2));       //mast maja
//     cout<<" ans "<<ans<<endl;
//     return ans;
// }
}