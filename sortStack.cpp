#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
void sort1(stack<int>&st, int x){
    if(st.empty() || st.top()>x){
        st.push(x);
        return;
    }
    int k = st.top();
    st.pop();
    sort1(st,x);
    st.push(k);
}

void insertAtBottom(stack<int>&st,int k){
    if(st.empty()){
        return;
    }s
    int x = st.top();
    st.pop();
    insertAtBottom(st,k);
    sort1(st,x);

}

void display(stack<int>&st){
    cout<<"after Deleting Element Stack is :"<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}


//------------------------------------driver code------------------------------
int main(){
int T;
cin>>T;
while (T--)
{
    stack<int>st;
    int N,k;
    cin>>N;
    for(int i=0;i<N;i++){
        int data;
        cin>>data;
        st.push(data);
    }
    cout<<"Enter the the Element : ";
    cin>>k;

    insertAtBottom(st,k);
    display(st);
}

return 0;
}