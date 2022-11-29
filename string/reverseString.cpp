#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverseString(string &str){
int start=0, end=str.size()-1;
while(start<=end){
    swap(str[start++],str[end--]);
}
}
int main(){
    string str;
    int T;  //test cases
    cin>>T;
    while(T--){
        cin>>str;
        reverseString(str);
        cout<<str;

    }
}