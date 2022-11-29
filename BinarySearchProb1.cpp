 #include<iostream>
 #include<vector>
 #include<bits/stdc++.h>
 using namespace std;

 int FirstOcc(vector<int> arr,int key,int n){
    int  start =0;
    int end = n-1;
    int ans=-1;

     while(start<=end){

         int mid=start+(end-start)/2;
         if(arr[mid]==key){
                ans=mid;
                end=mid-1;
             }
                
         else if(arr[mid]<key){
             start=mid+1;
         }
         else{
             end=mid-1;
         }
         mid = start+(end-start)/2;
     }
     return ans;
 }

 int SecondOcc(vector<int> arr,int key,int n){
    int  start =0;
    int end = n-1;
    int ans;
   
     while(start<=end){
          int mid=start+(end-start)/2;
         
         if(arr[mid]==key){
                 ans=mid;
                 start=mid+1;
         }
         else if(arr[mid]<key){
             start=mid+1;
         }
         else{
             end=mid-1;
         }
         mid = start+(end-start)/2;
     }
     return ans;
 }

 
 int main(){
     vector<int> arr;
     int N,T=2,X,Key;
     while(T--){
         cout<<"enter The Number Of Elements: ";
         cin>>N;
         cout<<"Enter The Elements : "<<endl;
         for(int i=0;i<N;i++){
            cin>>X;
            arr.push_back(X);
         }
        cout<<"Search Key : ";
        cin>>Key;
        int  p =FirstOcc(arr,Key,N);
        int  q = SecondOcc(arr,Key,N);
        cout<<"First Occerence is : "<<p<<endl;
        cout<<"second Occerence is : "<<q<<endl;
    }

     return 0;

 }
