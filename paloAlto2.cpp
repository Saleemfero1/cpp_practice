#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//------------------------------------driver code------------------------------
int main(){
int T;
cin>>T;
while(T--){
int N;
string s;
vector<int>A;
cin>>N;
cin>>s;
for(int i = 0; i<N; i++){
    int data;
    cin>> data;
    A.push_back(data);
}

vector<pair<char,int>>B;
for(int i = 0; i<N; i++){
   B.push_back(make_pair(s[i],A[i]));
}

vector<int>ans;
string a;
for(int i =0; i<N;i++){
    int maxi = i;
    int flag = 0;

    for(int j = 0;j<N; j++){
        if(B[i].first == B[j].first){
        flag = 1;
        if(j<i && B[j].second>B[i].second){
            ans.push_back(j);
            break;
        }
        if(B[i].second<=B[j].second){
            maxi = j;
        }else{
            maxi =i;
        }
        }
    }
    if(flag = 0){
        ans.push_back(i);
    }else{
        ans.push_back(maxi);
    }
}
for(auto x: ans){
    A[x] = 0;
}
int sum=0;
for(auto x:A){
sum+=x;
}
cout<<sum;
}
return 0;
} 
