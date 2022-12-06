//add two linked list this is my approch 
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
class B{
    public:
        int data;
        B* Link;
        B(int data){
            this->data=data;
            this->Link=NULL;
        }
};
class C{
    public:
        int data;
        C* Link;
        C(int data){
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

void insert_At_B(B* &BHead){
    int data;
    B* Temp=BHead;
    cout<<"Enter the data : ";
    cin>>data;
    B* Item =new B(data);
    if(BHead==NULL){
        BHead=Item;
        return;
    }
    while(Temp->Link!=NULL){
        Temp=Temp->Link;
    }
    Temp->Link=Item;
    return;
}



void display(A* &AHead,B* &BHead){
    A* Temp=AHead;
    B* Temp1=BHead;
    if(AHead==NULL){
        cout<<"List is Empty "<<endl;
        return;
    }
    cout<<"List A Contain This Element : ";
    while(Temp!=NULL){
        cout<<Temp->data<<"->";
        Temp=Temp->Link;
        }
    cout<<endl<<"List B Contain This Element : ";
     while(Temp1!=NULL){
        cout<<Temp1->data<<"->";
        Temp1=Temp1->Link;
        }
}

void  addTwoList(A* &AHead,B* &BHead,C* &CHead){
    int data;
    A* TempA=AHead;
    B* TempB=BHead;
    C* TempC;
    int dataC;
    while(TempA!=NULL || TempB != NULL){
        dataC=TempA->data+TempB->data;
        C* Item = new C(dataC);
        if(CHead==NULL){
            CHead=Item;
            TempC=CHead;
             TempA=TempA->Link;
             TempB=TempB->Link;
            continue;
        }
        TempC->Link=Item;
        TempC=TempC->Link;
        TempA=TempA->Link;
        TempB=TempB->Link;
    }

    
return;
}

 void displayAdd(C* &CHead){
     C* Temp=CHead;
    if(CHead==NULL){
        cout<<"List is Empty "<<endl;
        return;
    }
    while(Temp!=NULL){
        cout<<Temp->data<<"->";
        Temp=Temp->Link;
        }
 }
int main(){
    int num;
    A* AHead=NULL;
    B* BHead=NULL;
    C* CHead=NULL;
    // int Adata;
    // int Bdata;


    cout<<"Enter the number of Elements : ";
    cin>>num;
    cout<<"Enter the Element of list A : "<<endl;
    for(int i=0;i<num;i++){
        insert_At_A(AHead);
    }
     cout<<"Enter the Element of list B : "<<endl;
     for(int i=0;i<num;i++){
       insert_At_B(BHead);
    }
    display(AHead,BHead);
    cout<<" ahead : "<<AHead->data<<endl;
    cout<<" bhead : "<<BHead->data;

    addTwoList(AHead,BHead,CHead);
    cout<<endl<<"result is : ";
    displayAdd(CHead);
    return 0;
}
