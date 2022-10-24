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

NODE* reversGroup(NODE* &Head,int Gcount){
    NODE* prev=NULL;
    NODE* curr=Head;
    NODE* next=NULL;
    int count=0;

    while(curr!=NULL && count<Gcount){
    next=curr->Link; 
    curr->Link=prev;
    prev=curr;
    curr=next;
    count++;
    }
    if(next!=NULL){
         Head->Link=reversGroup(next,Gcount);
    }
    Head= prev;
    return Head;
}
void insertFront(NODE* &Head,int data,NODE* &Last){
    NODE* Item = new NODE(data);
    if(Head==NULL){
        Head=Item;
        Last=Item;
        return;
    }
    Item->Link=Head;
    Head = Item;
}

void display(NODE* &Head,NODE* &Last){
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
    NODE* Last=NULL;
    int num;
    int data;
    int Gcount;
    cout<<"Enter the number of Elements: ";
    cin>>num;
    cout<<"Enter "<<num<<" Elements :"<<endl;
    for(int i=0; i<num; i++){
        cin>>data;
        insertFront(Head,data,Last);
    }
    display(Head,Last);
    cout<<endl<<"enter the group num : ";
    cin>>Gcount;
    reversGroup(Head,Gcount);
    display(Head,Last);
}
