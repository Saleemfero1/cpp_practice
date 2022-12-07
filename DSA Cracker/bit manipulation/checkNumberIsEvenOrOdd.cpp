#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------

//method One using % Opretor
void usingMOdOper(int N){
    if(N%2==0){
        cout<<"it is Even"<<endl;
    }else{
        cout<<"it is Odd"<<endl;
    }
    return;
}

//method Two using / Opretor
void usingDivOper(int N){
    int A = N;
    if((A/2)*2 == N){
        cout<<"it is Even"<<endl;
    }else{
        cout<<"it is Odd"<<endl;
    }
    return;
}

//method Three using & Opretor
void usingANdOper(int N){
    if(N&1){
        cout<<"it is Odd"<<endl;
    }else{
        cout<<"it is Even"<<endl;
    }
    return;
}

//method four using << , >> (right shift and left shift)Opretor
void usingShiftMethod(int N){
    int A = N;
    if((A>>1)<<1==N){
        cout<<"it is Even "<<endl;
    }else{
        cout<<"it is odd "<<endl;
    }
    return;
}   

//------------------------------------driver code------------------------------
int main(){
int T;
cin>>T;
while(T--){
int N;
cin>>N;
usingMOdOper(N);
usingDivOper(N);
usingANdOper(N);
usingShiftMethod(N);
}
return 0;
}