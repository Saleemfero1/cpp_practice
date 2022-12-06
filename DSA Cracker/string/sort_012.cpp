#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//--------------------------write your function code here!------------------
 void sort_0_1_2(int arr[],int N){
    int zero = 0;
    int two = N-1;
    int one = 0;
    // method 1
    while(one<= two){
        if(arr[one]==0)
            swap(arr[zero++],arr[one++]);
        else if(arr[one]==2)
            swap(arr[one],arr[two--]);
        else
            one++;
    }
    //method 2 by counting frequeny of 0 1 2 and rewrite in array
    //we can use switch case in above code
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
   sort_0_1_2(arr,N);
   for(int i=0;i<N;i++){
    cout<<arr[i]<<" ";
   }
}
return 0;
}