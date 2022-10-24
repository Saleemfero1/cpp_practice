#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string removed(string s,string w){
    int strSize=s.length();
    while(strSize!=0 && s.find(w)<s.length())
    {
        s.erase(s.find(w),w.length());
    }
    return s;
}

int main(){
    string s;
    string w;
    int T;//T for test cases
    cin>>T;
    while(T--){
    cin>>s;//string
    cin>>w;//substring
    cout<<"after removed string is : "<<removed(s,w); 
    }
    
}