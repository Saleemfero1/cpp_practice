#include<iostream>
using namespace std;

int SumOfArrEle(int arr[],int num){
  if(num<=-1){
      return 0;
  }
  return arr[num] + SumOfArrEle(arr,num);
}

int main(){
    int num;
    int arr[10];

    cout<<"Enter The number Of Elements : ";
    cin>>num;

    cout<<"Enter the "<<num<<" Elements :"<<endl;
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }

     cout<< "The Sum Of Array Is : "<<SumOfArrEle(arr,num);

}