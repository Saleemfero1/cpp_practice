#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
class Stack{
    public:
        int* Arr;
        int Top1;
        int Top2;
        int Size;

        Stack(int Size){
            this->Size = Size;
            this->Arr = new int[Size];
            this->Top1 = -1;
            this->Top2 = Size;
        }
        
        void Push1(int);
        void Push2(int);
        void Pop1();
        void Pop2();
        int Peek1();
        int Peek2();
        bool isEmpty1();
        bool isEmpty2();
};

void Stack::Push1(int data){
    if(Top1==Top2-1){//Top2-Top1 <= 1
        cout<<"Stack is OverFlow."<<endl;
        return;
    }else{
        Top1++;
        Arr[Top1]=data;
    }
}
void Stack::Push2(int data){
    if(Top2-1==Top1){
        cout<<"Stack is OverFlow."<<endl;
        return;
    }
    Top2--;
    Arr[Top2]= data;
}

void Stack::Pop1(){
    if(Top1==-1){
        cout<<"Stack is Empty"<<endl;
        return;
    }else{
         cout<<"Poped Element is: "<<Arr[Top1]<<endl;
        Top1--;
    }
}
void Stack::Pop2(){
     if(Top2==Size){
        cout<<"Stack is Empty"<<endl;
        return;
    }else{
        cout<<"Poped Element is: "<<Arr[Top2]<<endl;
        Top2++;
    }
}

int Stack::Peek1(){
if(Top1 == -1){
    return -1;
}else{
    return Arr[Top1];
}
}

int Stack::Peek2(){
   if(Top1 == Size){
    return -1;
}else{
    return Arr[Top2];
} 
}

bool Stack :: isEmpty1(){
 if(Top1==-1){
        cout<<"Stack is Empty"<<endl;
        return 1;
    }else{
        cout<<"Elements are Present in Stack."<<endl;
        return 0;
    }
}

bool Stack :: isEmpty2(){
 if(Top1==Size){
        cout<<"Stack is Empty"<<endl;
        return 1;
    }else{
        cout<<"Elements are Present in Stack."<<endl;
        return 0;
    }
}
//------------------------------------driver code------------------------------
int main(){
Stack st(5);
st.Push1(10);
st.Push1(11);
st.Push2(21);
st.Push2(34);
st.Push1(7);
//st.Push2(8);
st.Pop1();
st.Pop2();  
st.Pop1();
st.Pop2();  
st.Pop1();
st.Pop2();  
st.Pop2();


return 0;
}














/* Stack Implementation using array

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
class Stack{
    public:
    int* Arr; 
    int Top;
    int Size;

    Stack(int Size){
        this->Size = Size;
        this->Arr = new int[Size];
        this->Top = -1;
    }
    void Push(int data);
    void Pop();
    int Peek();
    bool isEmpty();
};

int Stack:: Peek(){
    if(Top == -1){
        return -1;
    }else{
        return Arr[Top];
    }
}

bool Stack::isEmpty(){
    if(Top == -1){
        cout<<"Stack is UnderFlow."<<endl;
        return true;
    }
    else{
        cout<<"Stack is Not UnderFlow"<<endl;
        return false;
    }
}

void Stack::Push(int data){
if(Top < Size-1){
    Top++;
    Arr[Top]=data;
}else{
    cout<<"Stack is OverFlow."<<endl;
}
}

void Stack::Pop(){
    if(Top == -1){
        cout<<"Stack Is UnderFlow."<<endl;
    }else{
        cout<<"Element is Poped : "<<Arr[Top]<<endl;
        Top--;
    }
}

//------------------------------------driver code------------------------------
int main(){
Stack st(5);
st.isEmpty();
cout<<st.Peek()<<endl;
st.Push(4);
st.Push(3);
st.Push(2);
st.Push(1);
st.Pop();
st.Pop();
st.Pop();
st.Pop();
st.isEmpty();
cout<<st.Peek()<<endl;

return 0;
}*/