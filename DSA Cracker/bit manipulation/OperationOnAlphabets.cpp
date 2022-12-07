#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
char convertUppertoLower(char ch){
    //cout<<char(ch |' '); note when ur printing do typecasting to char 
    return ch | ' ';
}

char convertLowerTOUpper(char ch){
    return ch & '_';
}

//------------------------------------driver code------------------------------
int main(){
int T;
cin>>T;
while(T--){
char ch;
cin>>ch;
cout<<convertUppertoLower(ch)<<endl;
cout<<convertLowerTOUpper(ch)<<endl;
}
return 0;
}