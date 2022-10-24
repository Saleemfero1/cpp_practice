#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
 void merge(int arr[],int i1,int end1,int i2,int end2){
    int dummy[50];
    int k=0;
    int index1=i1;
    int index2=i2;
    while(index1<=end1 && index2<=end2){
        if(arr[index1]<arr[index2]){
            dummy[k++]=arr[index1++];
        }else{
            dummy[k++]=arr[index2++];
        }
    }
    while(index1<=end1){
        dummy[k++]=arr[index1++];
    }
    while (index2<=end2)
    {
         dummy[k++]=arr[index2++];
    }
    for(int i=i1,k=0;i<=end2;k++,i++){
        arr[i]=dummy[k];
    } 
    }
void mergeSort(int arr[],int low,int high){
    if(low<high){
    int mid = (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,mid+1,high);
    }  
}
//------------------------------------driver code------------------------------
int main(){
int arr[100];
int N,T;
cin>>T;
while(T--){
    cout<<"Enter the number of elements: ";
    cin>>N;
    cout<<"Enter Elements : "; 
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,N-1);
    for(int i=0; i<N;i++){
        cout<<arr[i]<<" ";
    }
}
return 0;
}