#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &stk, int Item){
//base case
if(stk.empty()){
    stk.push(Item);
    return;
}
//recursive call
int num = stk.top();
stk.pop();
insertAtBottom(stk,Item);
stk.push(num);
}

void solve(stack<int>&stk,int Item){
    int N=stk.size();
    insertAtBottom(stk,Item);
}
int main(){
    stack<int>stk;
    int n;
    cout<<"enter the number of elemet :";
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        stk.push(x);
    }
    int Item;
    cout<<"enter the number to insert at bottom : ";
    cin>>Item;
    solve(stk,Item);
    while(!stk.empty()){
        cout<<stk.top() <<" ";
        stk.pop();
    }
    return 0;
}