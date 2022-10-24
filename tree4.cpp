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
//-----------build ur function------------------

//----------check wether given binary tree is sum tree or not--------------
pair<bool,int>sumTree(node* root){
    if(root==NULL){
        pair<bool,int>p=make_pair(true,0);
        return p;
    }
    if(root->left==NULL && root->right==NULL ){
          pair<bool,int>p=make_pair(true,root->data);
          return p;
    }
    pair<bool,int> left =sumTree(root->left);
    pair<bool,int> right =sumTree(root->right);
    bool condition = ((left.second + right.second)==root->data);
    pair<bool,int>ans;
    if(left.first && right.first && condition){
        ans.first=true;
        ans.second=2*root->data;
        return ans;
    }
    else{
        ans.first=false;
         ans.second=left.second+right.second+root->data;
        return ans; 
    }

}
//---------------------zigZagTraversal-------------------
vector<int> zigzagTraversal(node *root)
{
    vector<int> ans;
    if (root == NULL){
        return ans;
    }
    queue<node *> q;
    q.push(root);
    bool leftToRight = true; // pahele root ko dalo q me
    while (!q.empty())
    { 
        int size = q.size();//abhi jitane element hai q me sab ek level ke hai hum utto ka hi count yad 
        //rakane ye size ka isteml karenge q aage element add hone wale hai
        vector<int> vect(size);

        for (int i = 0; i < size; i++)
        {
            node *atFront = q.front(); // ek node liyo aur usme q ka first node dalo
            q.pop();

            int index = leftToRight ? i : size - i - 1;//eleme sida dalna hai ulata ye check kerenge
            vect[index] = atFront->data;
            if (atFront->left != NULL)
                q.push(atFront->left);
            if (atFront->right != NULL)
                q.push(atFront->right);
        }
        leftToRight = !leftToRight;//ek bar travers huwa to toggle karenge condition 
        // copy to result
        for (auto i : vect)
        {
            ans.push_back(i);
        }
        vect.clear();
    }
    return ans;
}
//-----------code for build tree----------------
node *buildTreeLevelOrder(node *root)
{
    queue<node *> q;
    int data;
    cout << "Enter the data  :";
    cin >> data;
    root = new node(data);
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        int leftdata;
        cout << " for left child of " << temp->data << " :";
        cin >> leftdata;
        if (leftdata != -1)
        {
            temp->left = new node(leftdata);
            q.push(temp->left);
        }
        int rightdata;
        cout << " for right child of " << temp->data << " :";
        cin >> rightdata;
        if (rightdata != -1)
        {
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
    return root;
}
//---------------driver code------------------------------
int main()
{

    node *root = NULL;
    //build tree
    root = buildTreeLevelOrder(root);
    //zizag traversal
    cout<<"zigZag Traversal : "<<endl;
    vector<int>vect=zigzagTraversal(root);
    for(auto i:vect){
        cout<<i<<" ";
    }
    //check sum of tree and sum Tree
    pair<bool,int>answer=sumTree(root);
    cout<<endl<<"Check wether Given binary Tree is Sum Tree Or Not : "<<answer.first<<endl;
    cout<<"sum of tree : "<<answer.second;
    
    return 0;
}