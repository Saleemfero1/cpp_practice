#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void SumOfPair(int arr[], int n,int key){
  
  for(int i=0; i<n; i++){
     for(int j=i+1;j<n;j++){
         if(key==arr[i]+arr[j]){
             cout<<"Values  is : [ "<<arr[i]<<" "<<arr[j]<<" ]"<<endl;
             cout<<"indices is : [ "<<i<<" "<<j<<" ]"<<endl;
         }
     }
  }
   return;  
}

int main(){
    
    int arr[10];
    int n,key;

    cout<<"Enter the Number of Array :";
    cin>>n;

    cout<<"Enter the Elements : "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    cout<<"Enter the key:";
    cin>>key;

    SumOfPair(arr,n,key);

    return 0;
}