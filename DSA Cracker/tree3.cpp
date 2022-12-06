#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//-------------------node creations---------------------------
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
//----------------------Given tree's are identical or not--------------
bool isIdentical(node* root1,node*root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    if(root1->data!=root2->data)
    return false;
    isIdentical(root1->left,root2->left);
    isIdentical(root1->right,root2->right);
    }
//-----------------height------------------
int heightOfTree(node* root){
   if(root==NULL)
        return 0;
    
    int leftHeight = heightOfTree(root->left);
    int rightHeight = heightOfTree(root->right);
    int height=max(leftHeight,rightHeight)+1;
    return height;
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
//---------------build tree using level order--------------
node *buildTreeLevelOrder(node* root){
    queue<node*>q;
    int data;
    cout<<"Enter the data  :";
    cin>>data;
    root = new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        int leftdata;
        cout<<" for left child of "<<temp->data<<" :";
        cin>>leftdata;
        if(leftdata!=-1){
        temp->left=new node(leftdata);
        q.push(temp->left);
        }

        int rightdata;
        cout<<" for right child of "<<temp->data<<" :";
        cin>> rightdata;
        if( rightdata!=-1){
        temp->right=new node(rightdata);
        q.push(temp->right);
        }
    }
    return root;
}
//--------------------isBalancedTree-------O(n2)-----------------
bool isBalanced(node* root){
    if(root==NULL)
        return true;
    bool left = isBalanced(root->left);
    bool right = isBalanced(root->right);
    bool diff = abs(heightOfTree(root->left)-heightOfTree(root->right))<=1;
    if(diff && left && right){
        return true;
    }else{
        return false;
    }
     
}
//---------------------isBalanced-----------O(n)--------------------
pair<bool,int>isBalanced2(node* root){
    if(root==NULL){
        pair<bool,int> p = make_pair(true,0);
        return p;
        }
    pair<bool,int>left = isBalanced2(root->left);
    pair<bool,int> right = isBalanced2(root->right);
    bool diff = abs(left.second-right.second)<=1;
    int height = max(left.second,right.second)+1;
    pair<bool,int>answer;
    answer.second=height;
    if(diff && left.first && right.first){
        answer.first=true;
    }else{
       answer.first=false; 
     }
     return answer;
}
bool balanceHaiKyaBhai(node* root){
    return isBalanced2(root).first;
}
//----------------driver code------------------------------
int main(){
    node* root1 =NULL;
    node* root2 =NULL;
    root1=buildTreeLevelOrder(root1);
    //root2=buildTreeLevelOrder(root2);
    cout<<"first Tree is "<<endl;
    levelOrder(root1);
    // cout<<"second Tree is "<<endl;
    // levelOrder(root2);
    // cout<<"It is Identical "<< isIdentical(root1,root2)<<endl;
    cout<<"is balanced tree :"<<balanceHaiKyaBhai(root1);
}