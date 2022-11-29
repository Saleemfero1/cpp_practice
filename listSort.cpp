// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// class A{
//     public:
//         int data;
//         A* Link;
//         A(int data){
//             this->data=data;
//             this->Link=NULL;
//         }
// };

// void insert_At_A(A* &AHead, int data){
//    A* Temp=AHead;
//     A* Item =new A(data);
//     if(AHead==NULL){
//         AHead=Item;
//         return;
//     }
//     while(Temp->Link!=NULL){
//         Temp=Temp->Link;
//     }
//     Temp->Link=Item;
//     return;
// }
// void sortList(A* &AHead){
// if(AHead==NULL){
//     return;
// }
// A* Head0=NULL;
// A* Head1=NULL;
// A* Head2=NULL;
// A* Temp=AHead;
// while(Temp!=NULL){
//     if(Temp->data==0){
//         insert_At_A(Head0,Temp->data);
//         Temp=Temp->Link;
//     }
//     else if(Temp->data==1){
//         insert_At_A(Head1,Temp->data);
//         Temp=Temp->Link;
//     }
//     else{
//         insert_At_A(Head2,Temp->data);
//         Temp=Temp->Link;
//     }
// }
// A* Temp0=Head0;
// while(Temp0 !=0){
//     if(Temp->Link==0){
//         Temp->Link=Head1;
//     }
// Temp0=Temp0->Link;
// }
// Temp->Link=Head2;
// AHead=Head1;
// }
// void display(A* &AHead){
//     A* Temp=AHead;
//     if(AHead==NULL){
//         cout<<"List is Empty "<<endl;
//         return;
//     }
//     while(Temp!=NULL){
//         cout<<Temp->data<<"->";
//         Temp=Temp->Link;
//         }
// }



// int main(){
//     int num,data;
//     A* AHead=NULL;
    
//     cout<<"Enter the number of Elements : ";
//     cin>>num;
//     cout<<"Enter the Element of list A : "<<endl;
//     for(int i=0;i<num;i++){
//         cout<<"Enter the data : ";
//         cin>>data;
//         insert_At_A(AHead,data);
//     }
    
//     display(AHead);
//     sortList(AHead);
//     display(AHead);
    
//     return 0;
// }