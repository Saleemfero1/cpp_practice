#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
//GFG QUESTION FROM LOVE BABBAR  DSA SHEET
//check if the given string is shuffled substring of another    
bool suffledSubStr(string str1,string str2){
int n = str1.size();
int m = str2.size();
if(n>m)return false;
sort(str1.begin(),str1.end());
for(int i=0;i<m;i++){
    if(i+n-1>m){
        return false;
    }
    string str="";
    for(int j=0;j<n;j++){
        str.push_back(str2[j+i]);
    }
    sort(str.begin(),str.end());
    cout<<str<<endl;
    if(str1==str){
        return true;
    }
}
}
//------------------------------------driver code------------------------------
int main(){
    string str1,str2;
    int T;
    cin>>T;
    while(T--){
        cin>>str1;
        cin>>str2;
       cout<<" is it suffuled sub string: " <<suffledSubStr(str1,str2);
    }

return 0;
}