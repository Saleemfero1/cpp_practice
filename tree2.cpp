#include <iostream>
#include <bits/stdc++.h>  
using namespace std;

//-------------------tree node creation----------------------
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

//-----------------find the hight of tree ------------------
int heightOfTree(node* root){
   if(root==NULL)
        return 0;
    
    int leftHeight = heightOfTree(root->left);
    int rightHeight = heightOfTree(root->right);
    int height=max(leftHeight,rightHeight)+1;
    return height;
}

//-----------------Diameter of tree(On)-------------------------
pair<int,int> findDiameter(node* root){
    if(root==NULL){
        pair<int,int>p=make_pair(0,0);
        return p;
    }
      
    pair<int,int> left = findDiameter(root->left);
    pair<int, int> right= findDiameter(root->right);

    int op1=left.first;
    int op2=right.first;
    int op3 =(left.second+right.second)+1;
    
    pair<int, int>answer;
    answer.first=max(max(op1,op2),op3);
    answer.second=max(left.second,right.second)+1;
    return answer;
}
int diameterOfTree(node* root){
    return findDiameter(root).first;
}
//----------------Diameter of tree(On2)----------------
int DiameterOfTree(node* root){
    if(root==NULL)
        return 0;
    int leftHeight = DiameterOfTree(root->left);
    int rightHeight = DiameterOfTree(root->right);
    int BothLeftRight = (+rightHeight)+1;
    int diameter = heightOfTree(root->left)+heightOfTree(root->right)+1;
    return diameter;

}
//---------------travers tree using levelOrder----------------
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
        temp->left=new node(leftdata);
        q.push(temp->left);
        }

        int rightdata;
        cout<<"Enter the data for right child of "<<temp->data<<" :";
        cin>> rightdata;
        if( rightdata!=-1){
        temp->right=new node(rightdata);
        q.push(temp->right);
        }
    }
    return root;
}
//--------------driver code-----------------------------------
int main()
{
    node *root = NULL;
    root = buildTreeLevelOrder(root);
    cout << "inorder trversal" << endl;
    cout <<endl<< "Level Order Traversal" <<endl;
    levelOrder(root);
    cout<<endl<<"Height of Tree : "<<heightOfTree(root);
    cout<<endl<<"diameter of tree :"<<diameterOfTree(root);

}