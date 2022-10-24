#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isItEqual(int A[],int B[]){
    for(int i=0;i<26;i++){
        if(A[i]!=B[i]){
            return false;
        }
    }
    return true;

}

bool Permutation(string s,string w){
    int Ssize=s.length();
    int windowKey=w.length();
    int count[26]={0};
     int count2[26]={0};
    int i=0;
    //store count char in word
    while(i<windowKey){
        int index=w[i]-'a';
        count[index]++;
        i++;
    }
    //traverse string first window
     i=0;
    while(i<windowKey){
        int index=s[i]-'a';
        count2[index]++;
        i++;
    }
    if(isItEqual(count,count2)){
        return true;
    }
    while(i<Ssize){
        int index=i-windowKey;
        count2[index]--;
        int index1=s[i]-'a';
        count2[index1]++;
        if(isItEqual(count,count2)){
        return true;
        }
        i++;
    }
    return false;
}

int main(){
    string s;
    string w;
    int T;//T for test cases
    cin>>T;
    while(T--){
    cin>>s;//string
    cin>>w;//substring
    cout<<"permutation is there : "<<Permutation(s,w); 
    }
    
}