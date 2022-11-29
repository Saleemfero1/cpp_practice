#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
class NODE{
    public:
    int data;
    NODE *link;
        NODE(int data){
            this->data = data;
            this->link = NULL;
        }
};

void insert(NODE* &head, NODE* &last){
    int data;
    cout<<"enter the data : ";
    cin>>data;
    
    NODE* item = new NODE(data); 
    item->link = NULL;
    if(head==NULL){  
        head = item;
        last = item;
        return;
    } 
    else{
        item->link = head;
        head = item;
    }
}

void insertAtEnd(NODE* &head,NODE* &last){
    int data;
    cout<<"enter the data to insert at end : ";
    cin>>data;

    NODE* item = new NODE(data);
    item->link=NULL;

    if(head==NULL){
        head = item;
        last = item;
        return;
    }else{
        last->link = item;
        last = item;
    } 
}
void insertAtposition(NODE* &head, NODE* &last){

    cout<<"enter the position : ";
    int pos;
    cin>>pos;
    if(pos == 1){
        insert(head,last);
    }

    int data;
    cout<<"enter the data to insert at position: ";
    cin>>data;
    
    NODE* item = new NODE(data);
    item->link=NULL;

    NODE* temp = head;
    for(int i=2;i<pos;i++){
        if(temp->link!=NULL){
            temp = temp->link;
        }
    }  
    item->link = temp->link;
    temp->link = item;

}
//------------------------------------driver code------------------------------
int main(){
NODE* head = NULL;
NODE* last = NULL;

for(int i=0;i<5;i++){
    insert(head,last);
}
NODE* temp = head;
while(temp!=NULL){
cout<<temp->data<<"->";
temp = temp->link;
}
cout<<endl<<head->data;
cout<<endl<<last->data;
cout<<endl;
insertAtEnd(head,last);
insertAtposition(head,last);
temp = head;
while(temp!=NULL){
cout<<temp->data<<"->";
temp = temp->link;
}
cout<<endl;
cout<<endl<<head->data;
cout<<endl<<last->data;

return 0;
}
