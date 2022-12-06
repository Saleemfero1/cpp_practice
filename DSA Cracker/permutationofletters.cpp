#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//
//---------------------------write your function code here!------------------
void solve(string s,vector<string>&vect, int start, int end){
    if(start>=end){
        vect.push_back(s);
        return;
    }
    for(int i = start;i<=end;i++){
        swap(s[start],s[i]);
        solve(s,vect,start+1,end);
        swap(s[start],s[i]);
    }
}
void perm(string s){
    vector<string>vect;
    solve(s,vect,0,s.size()-1);
    for(auto x:vect){
        cout<<x<<endl;
    }
}
//------------------------------------driver code------------------------------
int main(){
int T;
cin>>T;
while(T--){
string s;
cout<<"Enter the string : ";
cin>>s;
perm(s);
}

return 0;
}