#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
int leargestSubArr(vector<int> vect,int k){
    int start = 0;
    int ans = INT_MIN;
    int sum = 0;
    for(int end = 0; end < vect.size(); end++){
        //jcalculation 
        sum +=vect[end];
        //if condition met
        if(sum==k){
            ans = max(ans,(end-start+1));
            sum-=vect[start];
            start++; 
        }
        //if condition cross limit
        if(sum>k){
            while(sum>k){
                sum-=vect[start];
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
    vector<int>vect;
    cout<<"Enter the N value : ";
    cin>>N;
    for(int i=0;i<N;i++){
        int x;
        cin>>x;
        vect.push_back(x);
    }
    int k;
    cout<<"enter size of sub Array : ";
    cin>>k;
    int ans=leargestSubArr(vect,k);
    cout<<"maximum sub array size : "<<ans<<endl; 
}

return 0;
}