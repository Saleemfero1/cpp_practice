#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
int maxSumSubArr(vector<int>vect, int k){
    int maxInd=INT_MIN;
    int i=0;
    int sum=0;
    int N=vect.size();
    for(int j=0;j<N;j++){
    sum+=vect[j];
    while(sum>k){
        sum-=vect[i];
        i++;
    }
    if(sum==k){
        maxInd=max(maxInd,j-i+1);
        sum-=vect[i];
         i++;
    }
    }
    return maxInd;
}
//------------------------------------driver code------------------------------
int main(){
vector<int>vect;
int N;
    cout<<"Enter the N value : ";
    cin>>N;
    for(int i=0;i<N;i++){
        int x;
        cin>>x;
        vect.push_back(x);
    }
    int k;
    cout<<"enter the sum K : ";
    cin>>k;
    cout<<maxSumSubArr(vect,k)<<endl;
return 0;
}
//input
//N=8;
//10 2 3 5 1 1 2 5
//kSum = 10
//output:
//4
//explaination : 3+5+1+1 =10
//max index consume by sum 