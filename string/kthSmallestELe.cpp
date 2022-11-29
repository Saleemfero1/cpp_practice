#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//---------------------------write your function code here!------------------
int KthElement(int arr[],int N,int k){
//method 1
// sort(arr,arr+N);
// return arr[k-1];

//method 2 by using map 
map<int,int>mp;
for(int i=0;i<N;i++){
    mp[arr[i]]++;//har element ko frequency ke sath map dalo 
}
int freq=0;
for(auto x:mp){
    freq+=x.second;//yaha frequency ko add karo jab tak o kth ki value ke bara bar na ho 
    if(freq>=k){   //jaha par bara bar ho us value ko return karo   
        return x.first;
    }
}
}
//------------------------------------driver code------------------------------
int main(){
int T,N;
int arr[100];
cout<<"Number of Test Cases [T]: ";
cin>>T;
while(T--){
    cout<<"Enter the value of N : ";
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
   cout << "Enter the Kth position : ";
   int K;
   cin>>K;
   cout<<"Kth smallest Element is : "<<KthElement(arr,N,K);
}
return 0;
}