#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class NODE{
    public:
        NODE* prev;
        int data;
        NODE* next;
NODE(int data){
    this->prev=NULL;
    this->data=data;
    this->next=NULL;
}
};

void insertFront(NODE* &Head,int data){
    NODE* Item = new NODE(data);
    if(Head==NULL){
        Head=Item;
        return;
    }
    Item->next=Head;
    Head->prev=Item;
    Head=Item;
    return;
}
void insertEnd(NODE* &Head,int data){
    NODE* Temp=Head;
    NODE* Item = new NODE(data);
    if(Head==NULL){
        Head=Item;
        return;
    }
    while (Temp->next!=NULL)
    {
        Temp=Temp->next;
    }
    Temp->next=Item;
}
void insertAtPos(NODE* &Head,int pos,int data){
    NODE* Temp=Head;
    NODE* Item = new NODE(data);
    if(pos==1){
        insertFront(Head,data);
        return;
    }
    for(int i=2;i<pos;i++){
        Temp=Temp->next;
    }
   Item->next= Temp->next;
   Temp->next->prev=Item;
   Temp->next=Item;
   Item->prev=Temp; 
}
void deleteFront(NODE* &Head){
    NODE* Temp=Head;
    if(Head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    Head=Head->next;
    Temp->next->prev=NULL;
    cout<<"deleted Element is : "<<Temp->data;
    delete Temp;
}

void deleteEnd(NODE* &Head){
    NODE* Temp=Head;
    if(Head==NULL){
        cout<<"List is Empty"<<endl;
        return;
    }
    while(Temp->next!=NULL){
        Temp=Temp->next;
    }
    cout<<"deleted Element is : "<<Temp->data<<endl;
    Temp->prev->next=NULL;
    
}

void deleteAtpos(NODE* &Head,int pos){
    NODE* Temp=Head;
    if(pos==1){
        deleteFront(Head);
        return;
    }
     for(int i=1;i<pos;i++){
        Temp= Temp->next;
     }
     if(Temp->next==NULL){
        deleteEnd(Head);
        return;
     }
     Temp->prev->next=Temp->next;
     Temp->next->prev=Temp->prev;
     cout<<"deleted elements : "<<Temp->data<<endl;
     delete Temp;
     return;
}

void display(NODE* &Head){
    NODE* Temp=Head;
    if(Head==NULL){
        cout<<"List is empty.."<<endl;
        return;
    }
    while(Temp!=NULL){
        cout<<Temp->data<<"->";
        Temp=Temp->next;    
    }
}
   

int main(){
    
    NODE* Head=NULL;
    NODE* Last=NULL;
    int data,ch=1,option,pos;

while (ch)
{
        cout<<"\t\t\t Doubly Linkde list :"<<endl;
        cout<<"1: Insert front "<<endl;
        cout<<"2: Insert End "<<endl;
        cout<<"3: Display "<<endl;
        cout<<"4: Insert at position "<<endl;
        cout<<"5: Delete front "<<endl;
        cout<<"6: delete at position"<<endl;
        cout<<"7: delete end "<<endl;
        cout<<"choose ur option : ";
        cin>>option;
        switch (option)
        {
        case 1:
            cout<<"Enter Number data : ";
            cin>>data;
            insertFront(Head,data);
            break;
        case 2:
            cout<<"Enter Number data : ";
            cin>>data;
            insertEnd(Head,data);
            break;
        case 3: 
            display(Head);
            break;
         case 4:
            cout<<"Enter Number data : ";
            cin>>data;
            cout<<endl<<"Enter position : ";
            cin>>pos;
            insertAtPos(Head,pos,data);
            break;
         case 5: 
            deleteFront(Head);
            break;
        case 6:
            deleteEnd(Head);
            break;
         case 7:
            cout<<"Enter the Pos :"<<endl;
            cin>>pos;
            deleteAtpos(Head,pos);
            break;
        
        default:cout<<"wrong option\n";
            break;
        }
        cout<<endl<<"if u wnt to continie press 1 lese 0: ";
        cin>>ch;    
}
}



 