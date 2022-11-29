#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Complement(int x){
    int y=x;
    int mask=0;
    if(x==0){
        return 1;
    }
    while(y!=0){
       mask = (mask<<1)|1; //create a mask which determine how many bits are need to complement and make that bits as 1
       y=y>>1;//for making 1 we are shifting 1 bit at a time
    }

    int ans = (~x) & mask;
    return ans;
}

int main(){
    int num;

    cout<<"Enter the number : ";
    cin>>num;

    cout<<Complement(num);
    return 0;
}
