#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
class node{
    public:
        int data;
        node* left;
        node* right;
        node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};
void buildTree(node* &root){
    int data;
    cout<<"enter the data for root : ";
    cin>>data;
    root = new node(data);
    cout<<root->data;
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        int leftdata;
        cout<<"Enter the data for A";
        cin
        if(leftdata!=-1){
        }
        int rightdata;
        if(rightdata){

        }

    }
    
}
//------------------------------------driver code------------------------------
int main(){
    node* root = NULL;
    buildTree(root);
return 0;
}