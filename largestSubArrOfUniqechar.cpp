#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
int longestUniqeStr(string str,int k){
    int start = 0;
    int ans = INT_MIN;
    int sum = 0;
    map<char,int>mp;
    for(int end = 0; end < str.size(); end++){
        //jcalculation 
        mp[str[end]]++;
        //if condition met
        if(mp.size()==k){
            ans = max(ans,(end - start +1));
        }
        if(mp.size()>k){
            while(mp.size()>k){
                mp[str[start]]--;
                if(mp[str[start]]==0)
                    mp.erase(str[start]);
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
    int k;
    cout<<"enter size of sub Array : ";
    cin>>k;
    int ans=longestUniqeStr(str,k);
    cout<<"maximum sub array size : "<<ans<<endl; 
}

return 0;
}