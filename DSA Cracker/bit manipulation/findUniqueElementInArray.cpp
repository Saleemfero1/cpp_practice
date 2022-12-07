#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
int findUniqueElement(vector<int>&vect){
    int ans = 0;
    for(int i = 0; i<vect.size(); i++){
        ans^= vect[i];
    }
    return ans;
}
//------------------------------------driver code------------------------------
int main(){
int T;
cin>>T;
while(T--){
    vector<int>vect;
    int N;
    cin>>N;
    for(int i = 0; i<N; i++){
        int data;
        cin>>data;
        vect.push_back(data);
    }
    cout<<"unique Element is : "<<findUniqueElement(vect)<<endl;

}
return 0;
}