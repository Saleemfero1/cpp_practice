#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sub(string str,string w){
    int sizeStr=str.length();
    int count=0;
    while(sizeStr!=0 && str.find(w)<sizeStr){
        count++;
        str.erase(str.find(w),w.length());
    }
    return count;
}

int main()
{
    string s;
    string w;
    int T;//T for test cases
    cin>>T;
    while(T--){
    cin>>s;//string
    cin>>w;//substring
    cout<<"subString Occure : "<<sub(s,w); 
    }
    
}