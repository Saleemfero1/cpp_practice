#include<iostream>
#include<cstdlib>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
bool checkIt(vector<int>vect1){
int N = vect1.size();
int count = 0;
for(int i=1;i<N;i++){
if(vect1[i-1]>vect1[i]){
count++;
}
if(vect1[N-1]>vect1[0]){
return false;
}
return count<=1;
}
}
//------------------------------------driver code----------------------------
int main(){
int T; //T means TestCases
cout<<"Enter TestCase : ";
cin>>T;
while(T){

vector<int> vect1;

//---------Vectors Reading ----------------- 
for(int i=0;i<7;i++){
int x;
cin>>x;
vect1.push_back(x); 
}

//---------function call Feild-------------
cout << " vector is rotated and sorted "<<checkIt(vect1);
//---------OutPut Feild---------------------
cout<<endl;
T--;
}
return 0;
}