#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int deci=0;
    int bin=0;
    int i=0;
    int n;
    cin>>n;
    while(n!=0){
        int bit= n%2;
        bin = bit*pow(10,i)+bin;
        n=n/2;
        i++;
    }
    cout<<bin<<endl;
    i=i-1;
    while(bin!=0){
       int bit=bin%10;
        if(bit==1)
        deci=deci+pow(2,i);
        bin=bin/10;
        i--;
    }
    cout<<deci;
    return 0;
}
