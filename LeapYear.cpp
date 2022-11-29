#include<iostream>
using namespace std;

int main(){
    int num;
    int num1,num2;
    
    //this code is checking for given  year that is leap or not
    cout<<"Enter the Year : ";
    cin>>num;

    if(num%4==0 ){
        cout<<num<<" is leap Year "<<endl;
    }
    else{
        cout<<num<<" is not Leap Year "<<endl;
    }

    //this is for printing leap year between given range
    cout<<"Enter The startint and Ending Year : ";
    cin>>num1>>num2;
    cout<<"Printing Lear Year between "<< num1<<" "<<num2<<endl;
    for(int i = num1; i<=num2; i++){
        if(i%4==0){
            cout<<i<<"\t";
        }
    }
    return 0;
}