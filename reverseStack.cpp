#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &stk, int Item){
//base case
if(stk.empty()){
    stk.push(Item);
    return;
} b
//top ke element nikalte jaao
int num = stk.top();
stk.pop();
//recursive call
insertAtBottom(stk,Item);
//jab wapa jaa rahe to insert karo end pe 
stk.push(num);
}

void solve(stack<int>&stk){
    //base case
    if(stk.empty())
    return;
    //top ko side me raklo 
    int Item=stk.top();
    stk.pop();
    //recursive call maro
    solve(stk);
    //jab wapas ja reahe hai to nikale huwe element ko insert at bottom karo
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
    solve(stk);
    while(!stk.empty()){
        cout<<stk.top() <<" ";
        stk.pop();
    }
    return 0;
}