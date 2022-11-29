/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~node(){
        cout<<"element is deleted"<<endl;
    }
};

void insertELe(node* &Head,node* &Last,int &count){
    int data;
    cout << "Enter the data : ";
    cin>>data;
    node* Item  = new node(data);
    count++;
    if(Head == NULL){
        Head = Item;
        Last = Item;
        return;
    }
    Item->next = Head;
    Head = Item;
}

void Display(node* &Head){
    node* temp = Head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}

void makeLoop(node* &Head,node* &Last,int point){
    node* temp = Head;
    while(point){
        temp = temp->next;
        point--;
    }
    Last->next = temp;
}

void detectLoop(node* &Head){
    node* slow = Head;
    node* fast = Head->next->next;
    while(fast!=slow){
        fast = fast->next->next;
        slow = slow->next;
    }
    cout<<fast->data;
}

void deleteMidEle(node* &Head,int count){
   if(Head == NULL){
    cout<<"Head is NULL"<<endl;
    return;
   }
   node* prev;
   node* curr= Head;
   while(count){
    curr = curr->next;
    count--;
   }
   prev = curr->next;
   curr->next= curr->next->next;

delete prev;
}

void doReverse(node* &Head){
    node* prev = NULL;
    node* curr = Head;
    node* next1 = NULL;
    while(curr!=NULL){
        next1 = curr->next;
        curr->next =prev;
        prev = curr;
        curr = next1;
    }
    Head = prev;
}

//------------------------------------driver code------------------------------
int main(){
node* Head = NULL;
node* Last = NULL;
int count=0;
for(int i = 0;i<6;i++){
    insertELe(Head,Last,count);
}
//makeLoop(Head,Last,2);
 Display(Head);
 cout<<endl;
 deleteMidEle(Head,count/2-1);
 doReverse(Head);
 Display(Head);
 cout<<endl<<count;
//detectLoop(Head);

return 0;
}*/

///////////////////////////////////////////TREE/////////////////////////////////////

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
    ~node()
    {
        cout << "node delete huwa";
    }
};

node *builtTree(node *&root)
{
    int data;
    cout << "Enter the data :";
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << " for left child " << root->data << " ";
    root->left = builtTree(root->left);
    cout << " for right child " << root->data << " ";
    root->right = builtTree(root->right);
    return root;
}
void preOrder(node *root)
{
    if (root == NULL)
        return;
    cout << "[" << root->data << "]"
         << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void leftPart(node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    leftPart(root->left);
}

int Hight(node *root)
{
    if (root == NULL)
        return 0;
    int left_height = Hight(root->left);
    int right_height = Hight(root->right);
    int maxi = max(left_height, right_height) + 1;
    return maxi;
}

void levelOreder(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    // cout<<root->data;  //left view
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        // if(q.front()==NULL){  // right view
        //     cout<<temp->data;
        // }
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                // cout<<q.front()->data<<" "; //left view
                q.push(NULL);
            }
        }
        else
        {
            cout<<temp->data<<" ";
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

void leafNode(node *root)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        cout << root->data << " ";
    }
    leafNode(root->left);
    leafNode(root->right);
}

void leftSide(node *root)
{
    if (root == NULL || root->right == NULL && root->left == NULL)
    {
        return;
    }
    cout << root->data << " ";
    if (root->left)
        leftSide(root->left);
    else
        leftSide(root->right);
}

void rightSide(node *root)
{
    if (root == NULL || root->left == NULL && root->right == NULL)
    {
        return;
    }
    if (root->right)
        rightSide(root->right);
    else
        rightSide(root->left);
    cout << root->data << " ";
}

void boundryLevelTravers(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " " << endl;
    leftSide(root->left);
    cout << endl;
    leafNode(root);
    cout << endl;
    rightSide(root->right);
}

void leftView(node *root, vector<int> &vect, int level)
{
    if (root == NULL)
    {
        return;
    }

    if (level == vect.size())
    {
        vect.push_back(root->data);
    }
    leftView(root->left, vect, level + 1);
    leftView(root->right, vect, level + 1);
}

void RightView(node *root, vector<int> &vect, int level)
{
    if (root == NULL)
    {
        return;
    }

    if (level == vect.size())
    {
        vect.push_back(root->data);
    }
    RightView(root->right, vect, level + 1);
    RightView(root->left, vect, level + 1);
}

void viewFromSides(node *root)
{
    vector<int> vect;
    int level = 0;
    leftView(root, vect, level);
    for (auto i : vect)
    {
        cout << i << " ";
    }
    cout << endl;
    vect.clear();
    level = 0;
    RightView(root, vect, level);
    for (auto i : vect)
    {
        cout << i << " ";
    }
}

node *buildTreeLevelOrder(node *&root)
{
    int data;
    cout << "Enter the data for root :";
    cin >> data;
    queue<node *> q;
    root = new node(data);
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        int leftData;
        cout << "Enter the data for left child of " << temp->data << " :";
        cin >> leftData;
        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        int rightData;
        cout << "Enter the data for right child of " << temp->data << " :";
        cin >> rightData;
        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }

    return root;
}

void verticalTraverse(node *root)
{
    map<int, map<int, vector<int>>> nodes;
    queue<pair<node *, pair<int, int>>> q;
    if (root == NULL)
        return;

    q.push(make_pair(root, make_pair(0, 0)));
    while (!q.empty())
    {
        pair<node *, pair<int, int>> temp = q.front();
        q.pop();
        node *frontNode = temp.first;
        int level = temp.second.second;
        int diff = temp.second.first;

        nodes[diff][level].push_back(frontNode->data);
        
        if(frontNode->left)
            q.push(make_pair(frontNode->left, make_pair(diff-1, level+1)));
        if(frontNode->right)
            q.push(make_pair(frontNode->right,make_pair(diff+1,level+1)));
        
    }
    for(auto i:nodes){
        for(auto j:i.second){
            for(auto k:j.second){
                cout<< k <<" ";
            }
        }
    }
}

void topView(node* root){
    map<int,int>nodes;
    queue<pair<node*,int>>q;
    q.push(make_pair(root,0));

    while (!q.empty())
    {
        pair<node*,int>temp = q.front();
        node* tempNode = temp.first;
        int diff = temp.second;
        q.pop();

        if(nodes.find(diff)== nodes.end())
            nodes[diff]=tempNode->data;
        
        if(tempNode->left)
            q.push(make_pair(tempNode->left,diff-1));
        if(tempNode->right)
            q.push(make_pair(tempNode->right,diff+1));
        
    }
    for(auto i:nodes){
        cout<<i.second<<" ";
    }
    
}

void bottomView(node* root){
    map<int,int>nodes;
    queue<pair<node*,int>>q;
    q.push(make_pair(root,0));

    while (!q.empty())
    {
        pair<node*,int>temp = q.front();
        node* tempNode = temp.first;
        int diff = temp.second;
        q.pop();

        nodes[diff]=tempNode->data;
        
        if(tempNode->left)
            q.push(make_pair(tempNode->left,diff-1));
        if(tempNode->right)
            q.push(make_pair(tempNode->right,diff+1));
        
    }
    for(auto i:nodes){
        cout<<i.second<<" ";
    }
    
}
//------------------------------------driver code------------------------------
int main()
{
    node *root = NULL;
    root = buildTreeLevelOrder(root);
    cout<<endl;
    cout<<"PreOreder Traverse "<<endl;
    preOrder(root);
    cout<<endl;
    cout<<"Level oreder is : "<<endl;
    levelOreder(root);
    cout<<endl;
    cout<<"vertiacal Travers "<<endl;
    verticalTraverse(root);
    cout<<endl;
    cout<<"view from both side of tree is :"<<endl;
    viewFromSides(root);
    cout<<endl;
    cout<<"Boundary traversal is : "<<endl;
    boundryLevelTravers(root);
    cout<<endl;
    cout<<"Left part is : "<<endl;
    leftPart(root);
    cout<<endl;
    cout<<"Top view is :"<<endl;
    topView(root);
    cout<<endl;
    cout<<"bottom view is : "<<endl;
    bottomView(root);
    cout<<endl;
    cout<<endl<<"Height is :"<<Hight(root)<<endl;
    return 0;
}
// INPUT:
// 1 2 3  4 5 6 7 8 9 10 13 -1 -1 11 12 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1