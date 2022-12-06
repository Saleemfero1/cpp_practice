// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// //---------------------------write your function code here!------------------
// //string str = aabc23dcdl45nsjj9k;
// //answer = output is 77
// //Explaination :: remove the number from string and add all the number
// // that is 23+45+9 == 77

// int additionNum(string str){
//     int start = 0;
//     int ans=0;
//     int num = 0;
//     for(int i = 0; i<str.size(); i++){
//         if(str[i]>='0' && str[i]<='9') 
//             num =num*10+(str[i]-'0');
//         else{
//              if(num!=0){
//                 ans+=num;
//                 num=0;
//              } 
//         }
// }
//  return ans+num;
// }

// //------------------------------------driver code------------------------------
// int main(){
// int T;
// cin>>T;
// while (T--)
// {
// string str;
// cin>>str;
// cout<<additionNum(str);
// }

// return 0;
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

//---------------------------write your function code here!------------------
//bit manipulation operators are following 
//and(&), or(|), not(~), xor(^), rigth shift(>>), leftshift(<<)

//------------------------------------driver code------------------------------
// int main(){


//-------------------swap element by bit manipulation------------------
// int a = 5,b = 10;
// cout<<"a is : "<<a<<" "<<"b is : "<<b<<endl;
// a = a^b;
// b = a^b;
// a = a^b;
// cout<<"a is : "<<a<<" "<<"b is : "<<b<<endl;

//----------------unique elemenet--------------------------------
// long long int N;
// cin>>N;
// int x = 0;
// int *arr = new int[N];
// for(int i = 0;i<N;i++){
//     cin>>arr[i];
// }
// for(int i = 0; i<N;i++){
//     x = x^arr[i];   
// }
// cout<<x;
// return 0;
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// //---------------------------write your function code here!------------------
// string finalOut(string out,string token){
//     string s ="";
//     for(int i = 0;i<out.size();i++){
//         if(token.find(out[i]) == -1){
//             s+=out[i];
//         }
//     }
//     if(s ==""){
//         return "EMPTY";
//     }else{
//         return s;
//     }
// }

// string StringChallenge(string str){
//     string ans=""; 
//     for(int i = 0;i < str.size();i++){
//         if((str[i]-'0')%2==1  &&(str[i+1]-'0')%2==1){
//             ans+=str[i];
//             ans+='-';
//         }else{
//             ans+=str[i];
//         }
        
//     }
//     return finalOut(ans,"80u75h4lqe9");
//    return ans;
// }
// // //------------------------------------driver code------------------------------
// int main(){
// int T;
// cin>>T;
// while(T--){
// string str;
// cin>>str;
// cout<<StringChallenge(str);
// }
// return 0;  
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// //---------------------------write your function code here!------------------

// //------------------------------------driver code------------------------------
// int main(){
// int T;
// cin>>T;
// while(T--){
// string arr[10];
// int n;
// cin>>n;
// for(int i = 0;i<n;i++){
//     cin>>arr[i];
// }
// sort(arr,arr+n);
// for(int i = 0;i<n;i++){
//     cout<<arr[i]<<" ";
// }

// }
// return 0;
// }

//#muddasssir bhai interview question
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------

//------------------------------------driver code------------------------------
int main(){
vector<int>vect;
long N;
cin>>N;
for(long i = 0; i< N; i++){
    int x;
    cin>>x;
    vect.push_back(x);
}
map<int,int>m;
for(long i = 0; i<N; i++){
    m[vect[i]]++;
}
int maxi = INT_MIN;
for(auto x:m){
    maxi = max(x.second,maxi);
}
cout<<maxi;
return 0;
}

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