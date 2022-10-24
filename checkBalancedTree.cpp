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
//-------------------balanced Tree -----------------problem 1--
pair<bool,int> balancedTree(node* root){
    if(root==NULL){
        pair<bool,int>p=make_pair(true,0);
        return p;
    }
    pair<bool,int> left = balancedTree(root->left);
    pair<bool,int> right = balancedTree(root->right);
    bool cond = (abs(left.second-right.second)<=1);
    pair<bool,int>ans;
    ans.second = max(left.second,right.second)+1;
    if(left.first && right.first && cond){
        ans.first=true;
    }else{
        ans.first=false;
    }
    return ans;    
}
//-----------------boundry traversal----------------problem 2------------- 
//left ke nodes
void leftKeNodes(node* root){
    if(root == NULL ||root->left==NULL && root->right==NULL )
        return;
    cout<<root->data<<" ";
    if(root->left){
        leftKeNodes(root->left);
    }else{
        leftKeNodes(root->right);
    }
} 
//leafKeNodes
void leafKeNodes(node* root){
    if(root==NULL){
        return;
    }
    leafKeNodes(root->left);
    if(root->left==NULL && root->right ==NULL){
        cout<<root->data<<" ";
    }
    leafKeNodes(root->right);
    }
//rightKenodes reverse me print karo
void rightKeNodes(node* root){
    if(root == NULL ||root->left==NULL && root->right==NULL )
        return;
        if( root->right){
             rightKeNodes(root->right);
        }else{
             rightKeNodes(root->left);
        }
        cout<<root->data<<" ";
}

void boudryTravers(node* root){
     cout<<root->data<<" ";//pahela root print karo
     leftKeNodes(root->left); //left ke part ko print karo
     leafKeNodes(root) ;    //leaf nodes ko print karo  
     rightKeNodes(root->right);//right ke nodes print karo
}
//--------------------preOrder traversal------------------------
void preOrder(node *root)
{
    if (root == NULL)
        return;
    cout <<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
    return;
}
int main()
{
    node *root = NULL;
    root = buildTree(root);
    cout <<endl<< "preOrder trversal" << endl;
    preOrder(root);
    //problem 1
    cout<<endl<<"balanced Tree or not ? : "<<balancedTree(root).first;
    //problem 2
    cout<<endl<<"Boundry Level : "<<endl;
    boudryTravers(root);
    return 0;

}