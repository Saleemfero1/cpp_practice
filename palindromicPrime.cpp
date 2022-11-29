#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
int palin(int L,int R){
    int count = 0;
    vector<int>vect;
    int flag = 0;
    for(int i = L; i<=R; i++){
        if(i ==1 || i == 0)
            continue;
    flag = 1;
    for(int j = 2; j<=i/2;++j){
        if(i%j == 0){
            flag = 0;
            break;
        }
    }
    if(flag == 1)
        vect.push_back(i);
    }
    for(auto x:vect){
        cout<<x<<" ";
    }
    //yaha tak prime nikal liye  ab palindrome karenge;

     
    return count;
}
//------------------------------------driver code------------------------------
int main(){
cout<<palin(150,200);
return 0;
}