#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//node creation using class
class NODE{
    public:
    int data;
    NODE* next;
};

int main(){
    //node initialization
    NODE *Temp;
    NODE *Head=NULL;
    NODE *Middle=NULL;
    NODE *Last=NULL;
    
    //node memory allocation 
    Head = new NODE();
    Middle = new NODE();
    Last = new NODE();

    Head->data=100;
    Head->next=Middle;

    Middle->data=200;
    Middle->next=Last;

    Last->data=300;
    Last->next=NULL;

    Temp=Head;
    
    //how traverse ......?
    cout<<"The Nodes Are : ";
    while(Head!=NULL){
        cout<<Head->data<<"\t";
        Head=Head->next;
    }
return 0;

}