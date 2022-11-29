#include<iostream>
using namespace std;

int lenearsearch(int arr[],int key,int n,int &loc){
   
   for(int i=0; i<n; i++){
       if(arr[i]==key){
           loc=i;
       }
   }
   return loc;

}

int main(){
    int arr[10],key,loc=0,n;
    
    cout<<"enter the number of element in array: ";
    cin>>n;
    cout<<"enter the elements : "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"enter the search key : ";
    cin>>key;

   if(lenearsearch(arr,key,n,loc) == 0){
       cout<<"Element not found...... "<<endl;
   }
   else{
       cout<<"Element Found at "<<loc+1<<" position"<<endl;
   }
   
   return 0;
}