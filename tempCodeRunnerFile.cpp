#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
vector<char>reversStr(string s){
//method one two point approch
vector<char>ans;
int i = 0, j = s.size()-1;
while(i<=j){
    ans[j] = s[i];
    ans[i++]=s[j--];
}
return ans;
}
//------------------------------------driver code------------------------------
int main(){
int T;
cin>>T;
while(T--){
string s;
cout<<"Enter the string : ";
cin>>s;
cout<<"reverse string is : "<<endl;
vector<char>vect = reversStr(s);
for(auto x:vect){
    cout<<x;
}

}

return 0;
}