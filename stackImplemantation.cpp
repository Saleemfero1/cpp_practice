#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
class Stack
{
    int *arr;
    int size;
    int top;
public:
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    // here i am writing operations
    void push(int data)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "stack is overflow" << endl;
        }
    }

    void pop()
    {
        if (top > -1)
        {
            top--;
        }
        else
        {
            cout << "stack is underflow" << endl;
        }
    }

    int peek()
    {
        if (top > -1)
            return arr[top];
        else
            return -1;
    }

    void isEmpty()
    {
        if (top == -1)
            cout << "stack is Empty" << endl;
        else
            cout << "stack is not Empty" << endl;
    }

    void display()
    {
        if (top > -1)
        {
            int temp = top;
            cout << "stack Elements are: ";
            while (temp != -1)
            {
                cout << arr[temp] << " ";
                temp--;
            }
            cout << endl;
        }else{
            cout<<"stack is Empty"<<endl;
        }
    }
};
//------------------------------------driver code------------------------------
int main()
{
    Stack st(5);
    st.push(33);
    st.push(44);
    st.push(66);
    cout << st.peek() << endl;
    st.display();
    st.pop();
    st.pop();
    st.pop();
    st.display();
    st.push(33);
    st.push(44);
    st.push(66);
    st.push(66);
    st.push(88);
    st.push(99);
    st.push(44);
    cout<<st.peek()<<endl;
    st.display();
    st.isEmpty();

    return 0;
}