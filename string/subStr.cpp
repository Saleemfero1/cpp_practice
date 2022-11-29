#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
void SubSequance(string str,vector<string> &result,string temp,int currIndex){
    if(currIndex>=str.size()){
        result.push_back(temp);
        return;
    }
    //---exclude-
    SubSequance(str,result,temp,currIndex+1);

    //--include-
    temp+=str[currIndex];
    SubSequance(str,result,temp,currIndex+1);

}
vector<string>findSubSequnces(string str){
    vector<string> result;
    string temp;
    SubSequance(str,result,temp,0);
    return result;
}
//------------------------------------driver code------------------------------
int main(){
string str;
int T;
cout<<"Enter the Test Cases : ";
cin>>T;
while(T--){
    cout<<endl<<"Enter string : ";
    cin>>str;
    vector<string>res = findSubSequnces(str);
    for(auto x:res){
        cout<<"\"";
        cout<<x;
        cout<<"\"";
        cout<<" ";
    }
}
return 0;
}