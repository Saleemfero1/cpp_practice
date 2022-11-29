#include<iostream>
using namespace std;

int BinarySearch(int arr[], int low,int high,int key){
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            return BinarySearch(arr,low,mid-1,key);
        }
        else{
             return BinarySearch(arr,mid+1,high,key);
        }
    }
    return 0;

}
int main(){
    int num;
    int arr[10],key;

    cout<<"Enter The number Of Elements : ";
    cin>>num;

    cout<<"Enter the "<<num<<" Elements :"<<endl;
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }
    
    cout<<"Enter The Serch Key for Searching....  : ";
    cin>>key;
    int S=BinarySearch(arr,0,num-1,key);
    if(S){
        cout<<"Element is Found At position : "<<S<<endl;
        return 0;
    }
    else{
        cout<<"Element Not Found.....:)"<<endl;
    }
    return 0;
}