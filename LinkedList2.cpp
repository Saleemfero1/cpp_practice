#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class NODE
{
public:
    int data;
    NODE *next;
};

//-------------------------delete front---------------------------
void deletefront(NODE *&Head)
{
    if (Head == NULL)
    {
        cout << "The list is Empty" << endl;
        return;
    }
    cout << "deletd is " << Head->data << endl;
    Head = Head->next;
}

//----------------------------------------insert front----------------------------
NODE *insertFront(NODE *&Head,NODE* &Last)
{
    NODE *Item;
    Item = new NODE();
    int d;

    cout << "Enter the Data to be inerted : ";
    cin >> d;

    Item->data = d;
    Item->next = NULL;
    if (Head == NULL)
    {
        Head = Item;
        Last=Item;
        return Head;
    }
    Item->next = Head;
    Head = Item;
    return Head;
}
//---------------------------insert end---------------------------------
NODE *insertEnd(NODE *&Head, NODE *&Last)
{
    NODE *Item;
    Item = new NODE();
    int d;
    cout << "Enter the Data to be inerted : ";
    cin >> d;

    Item->data = d;
    Item->next = NULL;

    if (Head == NULL)
    {
        Head = Item;
        return Head;
    }
    while (Last->next != NULL)
    {
        Last = Last->next;
    }
    Last->next = Item;
}
//--------------------------insert at position------------------
void insertAtPos(NODE* &Head, int pos,NODE* &Last){
int d;
NODE* Item;
NODE* temp;
temp=Head;
Item=new NODE();
if(Head==NULL  || pos==1){
    insertFront(Head,Last);
    return;
}
cout<<"Enter the data to be inserted  ";
cin>>d;
Item->data=d;
Item->next=NULL;
for(int i=2;i<pos;i++){
    if(temp->next!=NULL){
    temp=temp->next;
    cout<<temp->data;
    }

}

Item->next=temp->next;
temp->next=Item;

}
//---------------------delete at position-----------------------------------
void deleteAtpos(NODE* &Head,int pos){
    NODE* temp;
    temp=Head;
    if(Head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
     if(pos==1){
        deletefront(Head);
        return;
    }
    for(int i=2;i<pos;i++){
        if(temp->next!=NULL){
            temp=temp->next;
        }      
    }
    cout<<"deleted data is : "<<temp->next->data<<endl;
    temp->next=temp->next->next;

}

//--------------------------delete end-------------------------------
void deleteEnd(NODE *&Head)
{
    NODE *Temp;
    Temp = Head;

    if (Head == NULL)
    {
        cout << "The list is Empty" << endl;
        return;
    }
    while (Temp->next->next != NULL)
    {
        Temp = Temp->next;
    }

    cout << "Head id:" << Head->data << endl;
    cout << " last deleted is : " << Temp->next->data << endl;
    Temp->next = NULL;
}

//--------------------------------display items-------------------
void display(NODE *&Head, NODE* &Last)
{
    NODE* temp;
    temp = Head;
    if (Head == NULL)
    {
        cout << "The Given List Is Empty :" << endl;
        return;
    }

    while (temp!= NULL)
    {
        cout << temp->data << "\t";
        temp = temp->next;
    }
    cout<<endl<<"last is "<<Last->data<<endl;
    return;
}
//--------------------------search key-----------------------------
bool searchkey(NODE* &Head,int key){
NODE* temp;
temp=  Head;
 int flag=0;
if(Head==NULL){
    cout<<"nai bro kcuh bhi khali hai list"<<endl;
    return false;
}
while (temp!=NULL)
{
   
    if(temp->data==key){
        flag=1;
        cout<<"mila gaya bhai hai andar"<<endl;
        return true;
    }
    temp=temp->next;
}
 if(flag==0){
    cout<<"nai mila bhai "<<endl;
    }
}
//-----------------------------------driver code--------------------------
int main()
{
    NODE *Head = NULL;
    NODE *Last = NULL;

    int op = 1, ch = 1, pos;
    while (ch){
    cout << "1.insert front" << endl;
    cout << "2.insert At End" << endl;
    cout << "3.delete front" << endl;
    cout << "4.delete At End" << endl;
    cout<<  "5.insert At position "<<endl;
    cout<<  "6.delete At position "<<endl;
    cout << "7.Bato bhai hamare linked list me kya hai" << endl;
    cout<<  "8.exit karo bhai thak gaya"<<endl;
    cout<<  "10.search karo hai kya nai";
    cout << "Enter ur choice" << endl;
    cin >> op;
    switch (op)
    {
    case 1:insertFront(Head,Last);
        break;
     case 2:insertEnd(Head, Last);
        break;
     case 3: deletefront(Head);
        break;
     case 4:deleteEnd(Head);
        break;
    case 5:
        cout<<"kaha dalna hai bhai..";
        cin>>pos;
        insertAtPos(Head,pos,Last);
        break;
    case 6:
        cout<<"kaha nikalna hai bhai..";
        cin>>pos;
        deleteAtpos(Head,pos);
        break;
     case 7:display(Head,Last);
        break;
        case 10:
                int key;
                cout<<"kya dhundana ab : ";
                cin>>key;
                searchkey(Head,key);
                break;
    case 8:exit(0);
    
    default:cout<<"wrong choice anna..."<<endl;
        break;
    }    
    cout<<"continue karna hai? ";
    cin>>ch;
    }
    return 0;
}