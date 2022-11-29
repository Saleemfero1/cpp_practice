#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//GFG QUESTION FROM LOVE BABBAR  DSA SHEET
bool validRotation(string str1, string str2){
    //step 1 check legnth of string if both string size different then return false
    if(str1.size()!=str2.size()){
        return false;
    }
    //step2 concatinate str1=str1+str1; itself 
    str1+=str1;
    //step3 find str2  in str1 if not found return false (string::npos is const value e.g = -1) 
    if(str1.find(str2)==string::npos){
        return false;
    }
    return true;
}
int main(){
    string str1,str2;
    int T;  //test cases
    cin>>T;
    while(T--){
        cin>>str1;
         cin>>str2;
        cout<<"valid Rotation : "<<validRotation(str1, str2);
    }
}