#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
void subSeq(string str,int index,string temp){
    if(index == str.size()){
        cout<<temp<<endl;
        return;
    }
    subSeq(str,index+1,temp);
    subSeq(str,index+1,temp+str[index]);

}
//------------------------------------driver code------------------------------
int main(){
int T;
cin>>T;
while(T--){
string str;
cin>>str;
subSeq(str,0,"");
}
return 0;
}