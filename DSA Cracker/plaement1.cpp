#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//---------------------------write your function code here!------------------
//node for singly linked list
class node{
     public:
        int data;
        node* link;
        node(int data){
            this->data = data;
            this->link = NULL;
        }
};

//doubly linked list node;
class Node{
     public:
        int data;
        Node* prev;
        Node* next;
        Node(int data){
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
        }
};

void insert(Node* &head, Node* &last){
    int data;
    cout<<"enter data to insert: ";
    cin>>data;
    Node* item = new Node(data);
    item->prev = NULL;
    item->next = NULL;
    if(head == NULL){
        head = item;
        last = item;
        return;
    }
    item->next = head;
    head->prev = item;
    head = item;
    return;
}


void display(Node* &head, Node* &last){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}

//this is only possible in doubly linked list
void display_reverse(Node* &head, Node* &last){
    Node* temp = last;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->prev;
    }
}

//-----------------------MAKE LOOP IN LINKED LIST----------------------------
// void makeloop(node* &head, node* &last){
//     int N;
//     cout<<"enter position for make loop : ";
//     cin>>N;
//     node* temp = head;
//     for(int i=0; i<N-1; i++){
//         temp = temp->link;
//     }
//     cout<<"loop is present at:"<<temp->data<<endl;
//     last->link = temp;
// }

//------------------------------DETECT LOOP IN LINKED LIST------------------------------
// void detectLoop(node* &head, node* &last){
//     if(head->link == head || head == head->link->link){
//         cout<<"loop is detected...."<<endl;
//     }
//     node* slow = head;
//     node* fast = head->link->link;
//     while(fast != NULL){
//         if(fast == slow){
//             cout<<"loop is detected...."<<endl;
//             return;
//         }
//         fast = fast->link->link;
//         slow = slow->link;
//     }
//     cout<<"loop is not detect."<<endl;
// }

//-----------------------REVERSE LINKED LIST-----------------------
// void reverseLink(node* &head, node* &last){
//     if(head == NULL || head->link == NULL){
//         return;
//     }
//     node* curr = head;
//     node* prev = NULL;
//     node* next = NULL;
//     while(curr!= NULL){
//         next = curr->link;
//         curr->link = prev;
//         prev = curr;
//         curr = next;
//     }
//     head = prev;
// }

//------------------------------------driver code------------------------------
int main(){
    Node* head = NULL;
    Node* last = NULL;

    for(int i=0; i<7; i++){
        insert(head,last);
    }
    display(head,last);
    // makeloop(head,last);
    // detectLoop(head,last);
    cout<<endl<<"Reverse Linked List :"<<endl;
    // reverseLink(head,last);
    // display(head);
     display_reverse(head,last);

return 0;
}