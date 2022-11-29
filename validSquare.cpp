#include<iostream>
using namespace std;

bool validSquare(int num){
     int s=0,e=num;
       int mid=s+(e-s)/2;
       long long int ans;
        while(s<=e){
          ans=mid*mid;
            if(ans==num)
                return true;
            if(ans<num)
                s=mid+1;
            else
                e=mid-1;
            mid=s+(e-s)/2; 
        }
        return false;
}
int main(){
    int x;
    cout<<"Enter the NUmber : ";
    cin>>x;
    if(validSquare(x))
    cout<<"true";
    else
    cout<<"false";

    return 0;
}