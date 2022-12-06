//sort alternate number print
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void alternate(int arr[],int N){
    int i=0;
    while(i<N){
        cout<<arr[i]<<" ";
        i+=2;
    }
}
int main(){
    int arr[100];
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    sort(arr,arr+N);
    alternate(arr,N);
}