#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string &str){
int start=0, end=str.size()-1;
while(start<=end){
    if(str[start++]!=str[end--]){
        return false;
    }
}
return true;
}
int main(){
    string str;
    int T;  //test cases
    cin>>T;
    while(T--){
        cin>>str;
        cout<<"Given string i palindrome : "<<checkPalindrome(str);
    }
}