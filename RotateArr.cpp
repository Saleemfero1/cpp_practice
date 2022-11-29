#include<iostream>
#include<cstdlib>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
bool rotateArr(vector<int>&vect1, int K){
    int N = vect1.size()-1;
    for(int i=0;i)
}
//------------------------------------driver code----------------------------
int main(){
int T; //T means TestCases
cout<<"Enter TestCase : ";
cin>>T;
while(T){

vector<int> vect1;

//---------Vectors Reading ----------------- 
for(int i=0;i<10;i++){
    int x;
    cin>>x;
    vect1.push_back(x);
}
int K;
cout << "Enter the number of Rotation : ";
cin>>K;
//---------function call Feild-------------
rotateArr(vect1,K);
//---------OutPut Feild---------------------
for(int i:vect1){
    cout<<i<<" ";
}
cout<<endl;
T--;
}
return 0;
}