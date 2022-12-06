#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
string longetsPalindrome(string str){
    if(str.size()<=1)
        return str;
    pair<int,int>ans;
    int maxi = 0;
    int start = 0;
    bool flag = false;
    for(int end = 0; end < str.size(); end++){
        if(flag ==true){
            start++;
            flag = false;
        }
        int i = start, j = end;
        while(i<j){
            if(str[i]!=str[j]){
                flag = true;
            }else{
                i++;
                j--;
            }
        }
       if(maxi < end-start+1){
        ans.first = start;
        ans.second = end;
        maxi = end-start+1;
       }
        
    }
    string ans1 ="";
    for(int i = ans.first;i<=ans.second;i++){
        ans1+=str[i];
    }
    return ans1;
}
//------------------------------------driver code------------------------------
int main(){
int T;
cin>>T;
while(T--){
string str;
cin>>str;
cout<<longetsPalindrome(str);
}
return 0;
}