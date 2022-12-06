#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
vector<int>fisrtNagetive(vector<int> vect,int k){
    vector<int>ans;
    int i=0;
    queue<int>q;
    int N=vect.size();
    for(int j=0;j<N;j++){
        if(vect[j]<0){
            q.push(vect[j]);
        }
        if(j-i+1==k){ //ye window maintain ki condition hai 
            if(q.empty()){
                ans.push_back(0);
                i++;
                continue;
            }
            ans.push_back(q.front());
            if(q.front()==vect[i]){
                q.pop();
            }
            i++;
        }
    }
    return ans;
}
//------------------------------------driver code------------------------------
int main(){

int T,N;
cin>>T;
while (T--)
{
    vector<int>vect;
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
    vector<int>ans=fisrtNagetive(vect,k);
    for(auto x:ans){
        cout<<x<<" ";
    }
}

return 0;
}