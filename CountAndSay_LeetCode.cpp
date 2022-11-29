#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
string contAndSay(int n){
    if(n == 1)
        return "1";
    if(n == 2)
        return "11";
    string str = "11";
    string ans="";
    for(int i = 3;i<=n;i++){
        int count = 1;
        int j = 0;
        while(j<str.size()){
            if(str[j]==str[j+1])
                count++;
            else{
                ans+=to_string(count);
                ans+=str[j];
                count = 1;
            }
            j++;
        }
        str = ans;
        ans = "";
    }
    return str;
}

//--------------------------------------OUTPUT---------------------------
//intput: n = 6 count ans say leetCode Prblem
// 1
// 11
// 21
// 1211
// 111221
// 312211
//------------------------------------driver code------------------------------
int main(){
int T;
cin>>T;
while(T--){
int N;
cin>>N;
cout<<contAndSay(N)<<endl;
}
return 0;
}