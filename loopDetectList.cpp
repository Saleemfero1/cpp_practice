#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class NODE
{
public:
    int data;
    NODE *Link;
    NODE(int data)
    {
        this->data = data;
        this->Link = NULL;
    }
};

// -------------------------loop detect wether loop is present in list or not -----------------
// bool isItLoop(NODE* &Head){
//     if(Head==NULL){
//         return false;
//     }
//     NODE* temp=Head;
//     map<NODE*,bool>visited;
//     while(temp!=NULL){
//         if(visited[temp]==true){
//             cout<<endl<<"Loop found at :"<<temp->data;
//             return true;
//         }
//         visited[temp]=true;
//         temp=temp->Link;
//     }
// return false;
// }

//---------------------------this is floyds loop detection alogrithm where both points
// meet togather loop detect algorithm-----------------------------------------
NODE* isItLoop(NODE *&Head)
{
    if (Head == NULL)
    {
        return Head;
    }
    NODE *slow = Head;
    NODE *fast = Head->Link->Link;
    while (slow != NULL || fast != NULL)
    {
        if (slow == fast)
        {
            cout << endl
                 << "this is the point where both point meet togather :" << slow->data;
            return fast;
        }
        cout << endl
             << "slow at : " << slow->data << "    fast at : " << fast->data << endl;
             slow=slow->Link;
             fast=fast->Link->Link;
    }
    cout<<endl<<"Loop not present in the list : "<<endl;
    return Head;
}
//----------------------finding where loop is started actually------------------------------
NODE* loopStart(NODE* &Head){
    NODE* fast = isItLoop(Head);
    NODE* slow = Head;
    cout<<"slow: "<<slow->data<<" fast: "<<fast->data<<endl;
    while(slow != NULL || fast != NULL){
      if(slow == fast){
        return fast;
      }
      fast=fast->Link;
      slow = slow->Link;
    }
    return Head;
}
void display(NODE *&Head)
{
    NODE *temp = Head;

    if (Head == NULL)
    {
        cout << "List is empty..." << endl;
        return;
    }
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->Link;
    }
}
int main()
{
    NODE *Head = NULL;
    NODE *node1 = new NODE(10);
    NODE *node2 = new NODE(20);
    NODE *node3 = new NODE(30);
    NODE *node4 = new NODE(40);
    NODE *node5 = new NODE(50);
    NODE *node6 = new NODE(60);
    Head = node1;

    node1->Link = node2;
    node2->Link = node3;
    node3->Link = node4;
    node4->Link = node5;
    node5->Link = node6;
    node6->Link = node3;
    //NODE *last = node6;

    cout << "Linked list is : " << endl;
    // display(Head); if here i display loop it goes in infinite loop
    // because temp doesnt reach null bcz i made loop with end node by connecting end node
    // cout << endl
    //      << "if there is loop present then print 1 else 0 : " << isItLoop(Head);
    // last->Link = Head;
    // cout << endl
    //      << "if there is loop present then print 1 else 0 : " << isItLoop(Head);
    NODE* loop =loopStart(Head);
    cout<<endl<<"loop start at this point "<<loop->data;
}