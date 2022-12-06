#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void AlternateSwap(int arr[], int n){
    int i=0;
    int j=1;
    //-------------------method one-----------------------------------
    while (j<n-1) {
        swap(arr[i],arr[j]);
        i=i+2;
        j=j+2;   
    }

    //-------------------method two--------------------------------
    // while (i+1<n-1) {
    //     swap(arr[i],arr[i+1]);
    //     i=i+2;   
    //}
    
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

    AlternateSwap(arr,n);
    
    cout<<"after swaping array :"<<endl;
    for(int i=0; i<n; i++)
    cout<<arr[i];
    return 0;
}