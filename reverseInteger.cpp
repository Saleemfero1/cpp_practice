#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int reversInt(int x){
  
    long long int ans=0;
    while(x!=0){
        int digit = x%10;
        ans=(ans*10)+digit;
        x=x/10;
    }
    if(ans<INT_MIN || ans>INT_MAX){
        return 0;
    }
    return ans;
}

//------------------second method------------------ 
// int reversInt(int x){

//     int ans=0;
//     while(x!=0){
//         int digit = x%10;
//         if((ans<INT_MIN/10) || (ans>INT_MAX/10)){
//             return 0;
//         }
//         ans=(ans*10)+digit;
//         x=x/10;
//     }
//     return ans;
// }

int main(){
    int num;

    cout<<"Enter the number : ";
    cin>>num;

    cout<<reversInt(num);
    return 0;
}


//the seccod method 
