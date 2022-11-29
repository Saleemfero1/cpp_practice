/*sum of letter means : 
                        sum of alphabets position 
    input is  : saleem
    output is : sum is = 55
    Explaination :
    s = 19, a = 1, l = 12, e = 5, e = 5, m = 13

*/ 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
int sumOfLetters(string s){
    int sum = 0;
    for(int i = 0; i<s.size();i++){
        sum+=s[i]-'a'+1;
    }
    return sum;
}
//------------------------------------driver code------------------------------
int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cout<<"Enter the string : ";
        cin>>s;
        cout<<"sum of letters is : "<<sumOfLetters(s)<<endl;
    }
return 0;
}
