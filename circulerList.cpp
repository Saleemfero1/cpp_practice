#include<iostream>
#include<map>
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


void insertFront(NODE* &Head,int data,NODE* &Last){
    NODE* Item = new NODE(data);
    if(Head==NULL){
        Head=Item;
        Last=Item;
       Item->Link=Head;
        return;
    } 
    Item->Link=Head;
    Head = Item; 
    Last->Link=Head;
}

void insertEnd(NODE* &Head,int data,NODE* &Last){
     NODE* Item = new NODE(data);
    if(Head==NULL){
        Head=Item;
        Item->Link=Head;
        Last=Item;
        return;
    }
    Last->Link=Item;
    Last=Item;
    Item->Link=Head;
    return;
}
   
void insertAtPos(NODE* &Head,int data,NODE* &Last,int pos){
    NODE* Item = new NODE(data);
    NODE* temp=Head;
    if(pos==1){
         insertFront(Head,data,Last);
        return;
    }
    for(int i=2; i<pos; i++){
        temp=temp->Link;
    }
    Item->Link=temp->Link;
    temp->Link=Item;
    if(Item->Link==Head){
        Last=Item;
    }
}

void  deleteFront(NODE* &Head,NODE* &Last){
    if(Head==NULL){
        cout<<"list is Empty"<<endl;
        return;
    }
   
    NODE* temp=Head;
    Head=Head->Link;
    Last->Link=Head;
    cout<<"Deleted Element is : "<<temp->data<<endl;
    delete temp;
}

void deleteEnd(NODE* &Head, NODE* &Last){
    if(Head==NULL){
        cout<<"list is Empty"<<endl;
        return;
    }
    NODE* temp=Head;
    while(temp->Link!=Last){
        temp=temp->Link;
    }
    cout<<"Deleted Element is : "<<Last<<endl;
    Last=temp;
    temp->Link=Head;
    }

void deleteAtPos(NODE* &Head, int pos, NODE* &Last){
    NODE* temp=Head;
    if(pos==1){
        deleteFront(Head,Last);
        return;
    }
    for(int i=2;i<pos;i++){
        temp=temp->Link;
    }
    if(temp->Link==Last){
        Last=temp;
    }
    cout<<"deleted element : "<<temp->Link->data<<endl;
    temp->Link=temp->Link->Link;

}
void display(NODE* &Head,NODE* &Last){
    NODE* temp=Head;
    if(Head==NULL){
        cout<<"List is empty..."<<endl;
        return;
    }
    while(temp->Link!=Head){
        cout<<temp->data<<"->";
        temp = temp->Link;
    }
    cout<<temp->data<<endl;
    cout<<"head address : "<<Head->data<<endl;
    cout<<"Last pointer is "<<Last->data;

}

bool isItLoop(NODE* &Head,NODE* &Last){
    map <NODE*,bool>store;
    NODE* temp=Head;
    if(Head==NULL)
        return 0;
    while(temp!=NULL){
        if(store[temp]==true){
            return 1;
        }
        store[temp]=true;
        temp=temp->Link;
    }

return 0;
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
        cout<<"6: delete end "<<endl;
        cout<<"7: delete at position"<<endl;
        
        cout<<"choose ur option : ";
        cin>>option;
        switch (option)
        {
        case 1:
            cout<<"Enter Number data : ";
            cin>>data;
            insertFront(Head,data,Last);
            break;
        case 2:
            cout<<"Enter Number data : ";
            cin>>data;
            insertEnd(Head,data,Last);
            break;
        case 3: 
            display(Head,Last);
            break;
         case 4:
            cout<<"Enter Number data : ";
            cin>>data;
            cout<<endl<<"Enter position : ";
            cin>>pos;
            insertAtPos(Head,data,Last,pos);
            break;
        case 5: 
            deleteFront(Head,Last);
            break;
        case 6:
            deleteEnd(Head,Last);
            break;
         case 7:
            cout<<"Enter the Pos :"<<endl;
            cin>>pos;
            deleteAtPos(Head,pos,Last);
            break;
        
        default:cout<<"wrong option\n";
            break;
        }
        cout<<endl<<"if u wnt to continie press 1 lese 0: ";
        cin>>ch;    
}
cout<<"is it looped "<<isItLoop(Head,Last);
}