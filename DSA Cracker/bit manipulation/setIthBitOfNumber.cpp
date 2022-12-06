// 3) clear(unset) the ith bit of a number(means make ith bit as 0)
// 2) Set the ith bit of a number.(it means makeith bit as 1)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
int setIthBitOfNUmber(int N,int I){
    int mask = 1<<(I-1);//here I is the position of bit  
    return(N | mask);
}

int unSetIthBithOfNUmber(int N,int I){
    int mask = 1<<(I-1);
    mask = ~mask;
    return(N & mask);
}
//------------------------------------driver code------------------------------
int main(){
int T;
cin>>T;
while(T--){
int N;
int I; // I for set bit position
int K; // k for unset bit position 
cin>>N>>I>>K;
cout<<"set Bit : "<<setIthBitOfNUmber(N,I)<<endl;
cout<<"Unset Bit : "<<unSetIthBithOfNUmber(N,K)<<endl;
}
return 0;
}

//Explaination ----------------------------

//  Ex(Unset): intput N = 10 (binary 1010) I = 4 (4th position 1 make it 0)
// Output is 2 (Binary 0010)

// Ex(set): intput N = 10 (binary 1010) I = 3 (3th position 0 make it 1)
// Output is 14  (Binary 1110)
