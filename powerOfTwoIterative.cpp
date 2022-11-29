#include<iostream>
using namespace std;

bool isPowerOfTwo(int n) {
      if(n==0)
          return false;
        int digit;
        int count=0;
        while(n>0){
            digit=n%2;
            if(digit==1)
                count++;
            if(count>1)
                return false;
            n=n/2;
        }
       return true;
        
    }
int main(){
    int n;
    cin>>n;
   cout<< isPowerOfTwo(n);
}