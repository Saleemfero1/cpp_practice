#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
class node{
    public:
        int data;
        node* lchild;
        node* rchild;

        node(int data){
            this->data = data;
            this->lchild = NULL;
            this->rchild = NULL;
        }
};

node* buildTree(node* root){
    int data;
    cin>>data;
    
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"enter the data for left child of "<<root->data<<" :";
    root->lchild = buildTree(root->lchild);
    cout<<"enter the data for right child of "<<root->data<<" :";
    root->rchild = buildTree(root->rchild);
    return root;

}

void inOrder(node* &root){
    if(root == NULL){
       return;
    }
        inOrder(root->lchild);
        cout<<"("<<root->data<<")";
        inOrder(root->rchild);
}

void preOrder(node* &root){
    if(root == NULL){
       return;
    }
        cout<<"("<<root->data<<")";
        preOrder(root->lchild);
        preOrder(root->rchild);
}

void postOrder(node* root){
    if(root == NULL){
       return;
    }
        postOrder(root->lchild);
        postOrder(root->rchild);
         cout<<"("<<root->data<<")";
}
  
void levelOrder(node* &root){
    queue<node*>q;
    int data;
    cout<<"Enter the root data :";
    cin>> data;
    root = new node(data);
    q.push(root);
    while (!q.empty()){
        node* temp = q.front();
        q.pop();

        int leftData;
        cout<<"Enter the data for left child of "<<temp->data<< " :";
        cin>>leftData;
        if(leftData!=-1){
            temp->lchild = new node(leftData);
            q.push(temp->lchild);
        }
        
        int rightData;
        cout<<"Enter the data for right child of "<<temp->data<<" :";
        cin>>rightData;
        if(rightData!=-1){
            temp->rchild = new node(rightData);
            q.push(temp->rchild);
        } 
    }
}
//------------------------------------driver code------------------------------
int main(){
   node* root = NULL;
   //root = buildTree(root);
    levelOrder(root);
   inOrder(root);
   cout<<endl;

//    postOrder(root);
//    cout<<endl;
//    preOrder(root);
return 0;
}
