#include<iostream>
using namespace std;

int main(){
    int num;
    int square=0,i=2;
    
    cout<<"Enter The Number : "<<endl;
    cin>>num;
    
    while(square<num){
        if(num%i==0||num<=1){
            cout<<"not a prime :";
            return 1;
        }
        square=i*i;
        i++;
    }

}