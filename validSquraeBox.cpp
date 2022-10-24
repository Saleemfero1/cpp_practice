#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int  binarySearch(int x){

    long long int ans=0;
    int s=0,e=x;
    int mid=s+(e-s)/2;
    while (s<e)
    {
        int square = mid*mid;
        if(square==x)
        return mid;
        
        if(square<x){ 
        ans=mid;
        s=mid+1;
        }
        
        else
        e=mid-1;
        mid=s+(e-s)/2;
    }
   return ans; 
}

double squareRoot(int tempSolu,int Precision,int n){
    double fact=1;
    double ans=tempSolu;
    for(int i=0;i<Precision;i++){
        fact=fact/10;
       for(double j=ans;j*j<n;j+=fact){
           ans=j;
       }
    }
    return ans;
    
}


int main(){
    int x;
    cout<<"Enter the NUmber : ";
    cin>>x;
    int tempSolu = binarySearch(x);
    cout<<"The Exact Answer is : "<<squareRoot(tempSolu,3,x);
    return 0;
}