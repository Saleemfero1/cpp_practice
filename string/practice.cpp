#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//---------------------------write your function code here!------------------
void union_Intersection(int arr1[],int arr2[],int N,int M){

//union method one with O(M+N)
// set<int>Set;
// for(int i=0;i<N;i++)
//     Set.insert(arr1[i]);

// for(int i=0;i<M;i++)  
//     Set.insert(arr2[i]);
// cout<< "union of two array : ";
// for(auto x:Set){
//     cout<<x<<" ";
// }


//union method two with O(max(M,N))
// set<int>Set;
// int mini = min(N,M);
// int i=0;
// //jo minimum legnht hai use pura dalo set me 
// for(;i<mini;i++){
//     Set.insert(arr1[i]);
//     Set.insert(arr2[i]);
// }
// //maximum length arr me kuch element bache honge use copy karo
// if(N>M){
//     for (; i < N; i++)
//         Set.insert(arr1[i]); 
// }
// if(N<M){
//     for (; i < M; i++)
//         Set.insert(arr2[i]); 
// }
// cout<< "union of two array : ";
// for(auto x:Set){
//     cout<<x<<" ";
// }

// method 3 by sorting 
//try this method 
}
//------------------------------------driver code------------------------------
int main(){
int T,N,M;
int arr1[100],arr2[100];
cout<<"Number of Test Cases [T]: ";
cin>>T;
while(T--){

    cout<<"Enter the value of N : ";
    cin>>N;
    cout<< "Enter elements : ";
    for(int i=0;i<N;i++){
        cin>>arr1[i];
    }

    cout<< "Enter the value of M : ";
    cin>>M;
    cout<< "Enter elements : ";
    for(int i=0;i<M;i++){
        cin>>arr2[i];
    }
    union_Intersection(arr1,arr2,N,M);
}
return 0;
}