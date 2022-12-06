#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
class Queue{
    public:
        int front;
        int rear;
        int Size;
        int* Arr;

        Queue(int Size){
            this->Size = Size;
            this->Arr = new int[Size];
            this->rear = -1;
            this->front = -1;
        }
        
        void enQueue(int data);//insert at rear
        void deQueue(); //delete At front 
        void Display();
        void isEmpty();
        void insertAtfront(int data);
        void deleteAtRear();

};

void Queue::enQueue(int data){
    if(rear == Size-1){
        cout<<"Queue is Full"<<endl;
        return;
    }
    if(rear==-1 && front == -1){
        rear++;
        front++;
        Arr[rear]=data;
    }else{
        rear++;
        Arr[rear]=data;
    }
}

void Queue::deQueue(){
    if(front == -1){
        cout<<"Queue is Empty."<<endl;
        return;
    }
    if(front == rear){
        cout<<"deleted Elelment:"<<Arr[front]<<endl;
        front = rear = -1;
    }else{
        cout<<"deleted Elelment:"<<Arr[front]<<endl;
        front++;
    }
}

void Queue::Display(){
    if(rear == -1){
        cout<<"Queue is Empty"<<endl;
        return;
    }
    int temp = 0;
    while(temp!=10){
        cout<<Arr[temp]<<" ";
        temp++;
    }
}

void Queue :: isEmpty(){
    if(front == -1 && rear == -1){
        cout<<"Queue is Empty."<<endl;
        return;
    }else{
        cout<<"Queue is not Empty"<<endl;
    }
}
 
void Queue::insertAtfront(int data){
    if(front == 0 && rear == Size-1 || front - 1 == rear){
        cout<<"Queue is full"<<endl;
        return;
    }
    if(front == -1){
        front++;
        rear++;
        Arr[front]=data;
    }else if(front == 0){
        front = Size-1;
        Arr[front]=data;
    }else{
        front--;
        Arr[front]=data;
    }
}
void Queue ::deleteAtRear(){
    if(front == -1 && rear == -1){
        cout<<"Queue is Full"<<endl;
        return;
    }
    if(front == rear){
        cout<<"deleted Elelment:"<<Arr[rear]<<endl;
        front = rear = -1;
    }else if(rear == 0){
       cout<<"deleted Elelment:"<<Arr[rear]<<endl;
        rear == Size-1;
        
    }else{
        cout<<"deleted Elelment:"<<Arr[rear]<<endl;
        rear--;
    }

}
//------------------------------------driver code------------------------------
int main(){
    // just ignore it all function are correct but switch case is little bit wrong i think
    int Size;
    cout<<"Enter the Size Of Queue : ";
    cin>>Size;
    Queue q(Size);
    int ch=0,option;
    do{
        cout<<"Select Queue type By Pressing Values."<<endl;
        cout<<"1.Input restricted Queue"<<endl;
        cout<<"2.Output restricted Queue"<<endl;
        cout<<"Enter choice : ";
        cin>>ch;
        switch (ch)
        {
        case 1:cout<<"------Input restricted Queue------"<<endl;
                cout<<"1:insert front"<<endl;
                cout<<"2:delete front"<<endl;
                cout<<"3:delete At End"<<endl;
                cout<<"enter ur choice";
                int ch1;
                cin>>ch1;
                switch (ch1)
                {
                case 1:cout<<"Enter element to be insert:";
                        int data;
                        cin>>data;
                        q.insertAtfront(data);
                    break;
                case 2:q.deQueue();
                    break;
                case 3:q.deleteAtRear();
                    break;
                case 4:exit(0);
                    break;
                default:cout<<"wrong Choice"<<endl;
                    break;
                }
            break;
        case 2:cout<<"------outPut restricted Queue------"<<endl;
                cout<<"1:insert front"<<endl;
                cout<<"2:insert At end"<<endl;
                cout<<"3:delete front"<<endl;
                cout<<"enter ur choice";
               
                cin>>ch1;
                switch (ch1)
                {
                case 1:cout<<"Enter element to be insert:";
                       int data;
                        cin>>data;
                        q.enQueue(data);
                    break;
                case 2:
                    cout<<"Enter element to be insert:";
               
                    cin>>data;
                    q.insertAtfront(data);
                    break;
                case 3:q.deQueue();
                    break;
                case 4:exit(0);
                    break;
                default:cout<<"wrong Choice"<<endl;
                    break;
                }
            break;
        default:cout<<"wrong choice:"<<endl;
            break;
        }

    cout<<"enter 1 for continue or 0 for Exit:";
    cin>>ch;
    }while(ch);
return 0;
}