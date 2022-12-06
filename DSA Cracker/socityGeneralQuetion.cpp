// question number one maximum occuring elemnets print count of that element 

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// //---------------------------write your function code here!------------------

// //------------------------------------driver code------------------------------
// int main(){
// vector<int>vect;
// long N;
// cin>>N;
// for(long i = 0; i< N; i++){
//     int x;
//     cin>>x;
//     vect.push_back(x);
// }
// map<int,int>m;
// for(long i = 0; i<N; i++){
//     m[vect[i]]++;
// }
// int maxi = INT_MIN;
// for(auto x:m){
//     maxi = max(x.second,maxi);
// }
// cout<<maxi;
// return 0;
// }

// question number 2 given random string arrange string in manner 
// like all"[{" this bracket comes first and all "]}" this brackts comes after string in between remaining string add in sorted orderd 

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// //---------------------------write your function code here!------------------

// //------------------------------------driver code------------------------------
// int main(){
// int T;
// cin>>T;
// while(T--){
// string str;
// cin>>str;
// string pro="",cat = "";
// for(int i = 0; i< str.size();i++){
//     if(str[i]=='[' || str[i]=='{'){
//         pro+=str[i];
//     }else if(str[i]==']' || str[i]=='}'){
//         cat+=str[i];
//     }
// }
// string ans = "";
// sort(str.begin(),str.end());
// ans+=pro;
// for(int i = 0;i<str.size();i++){
//    if(str[i]=='[' || str[i]=='{' || str[i]==']' || str[i]=='}'){
//     continue;
//    }else{
//     ans+=str[i];
//    }
// }
// ans+=cat;
// cout<<ans;  
// }
// return 0;
// }