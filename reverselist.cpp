#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A{
    public:
        int data;
        A* Link;
        A(int data){
            this->data=data;
            this->Link=NULL;
        }
};

void insert_At_A(A* &AHead){
    int data;
    A* Temp=AHead;
    cout<<"Enter the data : ";
    cin>>data;
    A* Item =new A(data);
    if(AHead==NULL){
        AHead=Item;
        return;
    }
    while(Temp->Link!=NULL){
        Temp=Temp->Link;
    }
    Temp->Link=Item;
    return;
}

void display(A* &AHead){
    A* Temp=AHead;
    if(AHead==NULL){
        cout<<"List is Empty "<<endl;
        return;
    }
    while(Temp!=NULL){
        cout<<Temp->data<<"->";
        Temp=Temp->Link;
        }
}

void RevList(A* &AHead){
    A* prev=NULL;
    A* Curr= AHead;
    A* Next = NULL;
    while(Curr!=NULL){
    Next=Curr->Link;
    Curr->Link=prev;
    prev=Curr;
    Curr=Next;
   }
AHead=prev;
}

int main(){
    int num;
    A* AHead=NULL;
    
    cout<<"Enter the number of Elements : ";
    cin>>num;
    cout<<"Enter the Element of list A : "<<endl;
    for(int i=0;i<num;i++){
        insert_At_A(AHead);
    }
    cout<<"before Reverse List is :";
    display(AHead);
    RevList(AHead);
    cout<<endl<<"After Revers List :";
    display(AHead);
    
    return 0;
}