#include<iostream>
#include<cstdlib>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
void findSubArr(vector<int>vect,vector<int> res,vector<vector<int>>&powSet,int currIndex){
    if(currIndex >= vect.size()){
        powSet.push_back(res);
        return;       
    }
    //for exclude
    findSubArr(vect,res,powSet,currIndex+1);
    int x =vect[currIndex];
    res.push_back(x);
    findSubArr(vect,res,powSet,currIndex+1);
}
vector<vector<int>>subArr(vector<int>vect){
    vector<vector<int>>powSet;
    vector<int> res;
    findSubArr(vect,res,powSet,0);
    return powSet;
}
//------------------------------------driver code----------------------------
int main(){
int T; //T means TestCases
cout<<"Enter TestCase : ";
cin>>T;
while(T){

vector<int> vect1;
//vector<int> vect2;
int n;
cout<<"Enter the number of Elements:";
cin>>n;
//---------Vectors Reading ----------------- 
for(int i=0;i<n;i++){
    int x;
    cin>>x;
vect1.push_back(x);
}
//---------function call Feild-------------
vector<vector<int>> res=subArr(vect1);
//---------OutPut Feild---------------------
for(vector<int>temp:res){
    cout<<"[";
    for(auto x:temp){
        cout<<x;
    }
    cout<<"]";
    cout<<"\t";
}
cout<<endl;
T--;
}
return 0;
}