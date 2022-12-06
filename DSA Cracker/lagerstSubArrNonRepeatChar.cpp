#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
int longestUniqeStr(string str){
   map<char, int>mp;
   int ans=INT_MIN;
   int start = 0;
   for(int end=0; end<str.size();end++){
    //calculation 
    mp[str[end]]++;
    if(mp[str[end]]>=2){
        ans = max(ans,end-start);
        while(mp[str[end]]>=2){
            mp[str[start]]--;
            start++;
        }
    }
   }
   return ans;
}
int main(){
int T,N;
cin>>T;
while (T--)
{
    string str;
    cout<<"Enter the string str : ";
    cin>>str;
    int ans=longestUniqeStr(str);
    cout<<"size of maximum sub array  with unique charecter  : "<<ans<<endl; 
}

return 0;
}