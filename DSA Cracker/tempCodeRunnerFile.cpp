#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------

//------------------------------------driver code------------------------------
int main(){
int T;
cin>>T;
while(T--){
int N;
cin>>N;
// if(N<<1){
//     cout<<"it is Nagetive Number."<<endl;
// }else{
//     cout<<"it is Positive Number."<<endl;
// }
while(N){
    int n = N<<1;
    cout<<n;
}
}
return 0;
}