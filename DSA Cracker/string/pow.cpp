#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
double powr(double n,double m){
    if(m == 0)
        return 1; 
    if(m == 1)
        return n;
    double ans = n;
    if(m>1){
        int i=m;
        while(i>1){
        ans = ans*n; 
        i--;
        }
        return ans;    
    }
    if(m<0){
        int i=-1 *m;
        while(i>1){
        ans = ans*n; 
        i--;
        }
        return 1/ans;
    }
}
//------------------------------------driver code------------------------------
int main(){
int T;
cin>>T;
while(T--){
    double n,m;
cin>>n;
cin>>m;
cout<<powr(n,m);
}
return 0;
}
// Input: x = 2.00000, n = 10
// Output: 1024.00000
// Input: x = 2.10000, n = 3
// Output: 9.26100
// Input: x = 2.00000, n = -2
// Output: 0.25000
// Explanation: 2-2 = 1/22 = 1/4 = 0.25