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
void findMid(NODE* &Head,int count){
    int mid;
    NODE* p1=Head;
//     NODE* p2=Head;
//     if(count%2==0){
//      while(p2 !=NULL){
//     p1=p1->Link;
//     p2=p2->Link->Link;
//    }
//     }
//     else{
//         while(p2->Link !=NULL){
//     p1=p1->Link;
//     p2=p2->Link->Link;
//     }}

if(count%2==0){
    mid=(count/2)+1;
}
else mid=count/2;
int i=1;
while (i<=mid)
{
    p1=p1->Link;
    i++;
}
cout<<"Mid Element is : "<<p1->data<<endl;

}
void display(NODE* &Head,int &count){
    NODE* temp=Head;
    
    if(Head==NULL){
        cout<<"List is empty..."<<endl;
        return;
    }
    while(temp!=NULL){
        count++;
        cout<<temp->data<<"->";
        temp = temp->Link;
    }
}
int main(){
    NODE* Head=NULL;
    int data;
    int count=0;
    int n;

    cout<<"Enter the number of nodes: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter Number data : ";
        cin>>data;
        insertFront(Head,data);
    }
    display(Head,count);
    cout<<endl<<"count : "<<count<<endl;
    findMid(Head,count);
    

    
}


    