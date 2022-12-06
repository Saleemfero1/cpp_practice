#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
vector<int> maxEleSubArr(vector<int>vect, int k){
    int Max,maxEle=INT_MIN;
    int i=0;
    vector<int>ans; 
    queue<int>q;
    int N=vect.size();
    for(int j=0;j<N;j++){
        //calculation
        maxEle=max(maxEle,vect[j]);
        if(q.empty()){
            q.push(maxEle);
        }
        else{
            while(maxEle>q.front()){
                q.pop();
                if(q.empty())
                    q.push(maxEle);
                    break;
            }
        }
        //window condition hit
        if(j-i+1==k){
            ans.push_back(q.front());
            if(q.front()==vect[i]){q.pop();}
            //jab window shift kar rahe hoge tab jo element
            // exclude kar rahe hai use dekenge ke o max to nai 
            //hai agar hai to q ko pop() kar do
            i++;
        }
    }
    return ans;
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
    vector<int> ans= maxEleSubArr(vect,k);
    for(auto x:ans){
        cout<<x<<" ";
    }

}

return 0;
}