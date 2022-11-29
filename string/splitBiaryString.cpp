 #include<iostream>
 #include<bits/stdc++.h>
 using namespace std;
 
 //---------------------------write your function code here!------------------
 int splitString(string str){
    int x=0, y=0,count=0;
    for(int i=0;i<str.size();i++){
     
        if(str[i]!='0'){
            x++;
        }else{
            y++;
        }
        if(x==y){
            count++;
        }
    }
    if(x!=y){
        return -1;
    }
    return count;
 }
 //------------------------------------driver code------------------------------
 int main(){
    string str;
    int T;
    cin>>T;
    while(T--){
        cin>>str;
        cout<<"number of substring : "<<splitString(str);
    }
 return 0;
 }