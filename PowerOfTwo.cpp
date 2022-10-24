//chek weather the given nummber is implise in power of 2
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int PowerOfTwo(int x){
    int y=x/2;
    int i=0;
    while (i<=y)
    {
        if(x == pow(2,i)){
            return true;
        }
        i++;
    }
    return false;
    
}

int main(){
    int num;

    cout<<"Enter the number : ";
    cin>>num;

    cout<<PowerOfTwo(num);
    return 0;
}
