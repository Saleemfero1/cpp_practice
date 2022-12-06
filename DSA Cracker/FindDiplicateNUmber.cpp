#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int UniqElement(int arr[], int n){
  sort(arr,arr+n);
  for(int i=0; i<n; i++){
      if(arr[i]==arr[i+1])
          return arr[i];
  }
   
  return 0;
    
}

int main(){
    
    int arr[10];
    int n;

    cout<<"Enter the Number of Array :";
    cin>>n;

    cout<<"Enter the Elements : "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

   cout<<"The Uniq Element Is : "<<UniqElement(arr,n);
    return 0;
}