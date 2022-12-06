#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class NODE{
    public:
    int data;
    NODE* Link;
    NODE(int data){
        this->data=data;
        this->Link=NULL;
    }
};
void insertFront(NODE* &Head,int data){
    NODE* Item = new NODE(data);
    if(Head==NULL){
        Head=Item;
        return;
    } 

    Item->Link=Head;
    Head = Item;
    
}
//-----------------------------this is one method-----------------------------------
// void reverse_list(NODE* &Head){
//     NODE* prev =NULL;
//     NODE* curr=Head;
//     NODE* Next=NULL;
//     if(Head==NULL || Head->Link==NULL){
//         return;
//     }
//     while(curr!=NULL){
//         Next=curr->Link;
//         curr->Link=prev;
//         prev=curr;
//         curr=Next;
//     }
//     Head=prev; 
   
// }
void doReverse(NODE* &Head, NODE* &prev, NODE* &curr){
    NODE* Next=NULL;
    if(curr==NULL){
        Head=prev;
        return;
    }
    Next=curr->Link;
     curr->Link=prev;
    doReverse(Head,curr,Next);
     //curr->Link=prev; this approch also corect but i did not understood 
     
}
void reverse_list(NODE* &Head){
    NODE* prev =NULL;
    NODE* curr=Head;
    doReverse(Head,prev,curr);
    
}

void display(NODE* &Head){
    NODE* temp=Head;
    
    if(Head==NULL){
        cout<<"List is empty..."<<endl;
        return;
    }
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->Link;
      
    }

}


int main(){
    NODE* Head=NULL;
    int data;

    for(int i=0;i<3;i++){
        cout<<"Enter Number data : ";
        cin>>data;
        insertFront(Head,data);
    }
    cout<<"Head is : "<<Head->data<<endl;
    display(Head);
    reverse_list(Head);
    cout<<endl;
    cout<<"Reverse Linked List Is : ";
    display(Head);
    
}