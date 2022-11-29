#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
int maxSumSubArr(vector<int>vect, int k){
    int sum=0,maxSum=INT_MIN;
    int i=0;
    int N=vect.size();
    for(int j=0;j<N;j++){
        sum+=vect[j];
        if(j-i+1==k){
            maxSum=max(maxSum,sum);
            sum-=vect[i];
            i++;
        }
        cout<<maxSum<<endl;
    }
    return maxSum;
}
//------------------------------------driver code------------------------------
int main(){
vector<int>vect;
int T,N;
cin>>T;
while (T--)
{
    cout<<"Enter the N value : ";
    cin>>N;
    for(int i=0;i<N;i++){
        int x;
        cin>>x;
        vect.push_back(x);
    }
    int k;
    cout<<"enter size of sub Array : ";
    cin>>k;
    cout<<maxSumSubArr(vect,k)<<endl;

}

return 0;
}