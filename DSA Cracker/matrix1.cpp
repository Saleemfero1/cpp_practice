// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// //---------------------------write your function code here!------------------

// //------------------------------------driver code------------------------------
// int main(){
// int T;
// cin>>T;
// while(T--){
// int Row, Col;
// int** Arr;
// cin>>Row>>Col; 
// Arr = new int*[Row];
// for(int i = 0; i < Row;i++){
//     Arr[i] = new int[Col];
// }

// for(int i = 0; i < Row; i++){
//     for(int j = 0; j < Col; j++){
//         cin>>Arr[i][j];
//     }
// }

// for(int i = 0; i < Row; i++){
//     for(int j = 0; j < Col; j++){
//         cout<<Arr[i][j]<<" ";
//     }
//     cout<<endl;
// }

// int sumL = 0;
// int sumU = 0;

// for(int i = 0; i < Row; i++){
//     for(int j = 0; j <= i; j++){
//        sumL = sumL + Arr[i][j];
//     }
// }

// for(int i = 0; i < Row; i++){
//     for(int j = i; j < Col; j++){
//        sumU = sumU + Arr[i][j];
//     }
// }

// cout<<"sum of upper part : "<<sumU<<endl;
// cout<<"sum of lower part :"<<sumL;
// }
// return 0;
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------

//------------------------------------driver code------------------------------
int main(){
map<int,int>mp;
string str ="saleejdkjdsadm";
int x,y;
for(int i=0;i<5;i++){
    cin>>x>>y;
    mp.insert(make_pair(x,y));
}
for(auto x:mp){
    cout<<x.first<<x.second<<endl;
}
return 0;
}