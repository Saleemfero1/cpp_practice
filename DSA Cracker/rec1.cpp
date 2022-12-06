#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sortK(vector<int>&vect,int first,int end1,int second, int end2){
    vector<int>temp;
   // cout<<first<<end1<<second<<end2<<endl;
    while(first<=end1 && second<=end2){
        if(vect[first]<=vect[second]){
            temp.push_back(vect[first]);
            first++;
            continue;
        }else{
            temp.push_back(vect[second]);
            second++;
            continue;
        }
    }


    // while(first!=end1){
    //     temp.push_back(vect[first]);
    //     first++;
    // }
    // while(second!=end2){
    //      temp.push_back(vect[second]);
    //         second++;
    // }
    vect=temp;
}
//---------------------------write your function code here!------------------
void mergeSort(vector<int>&vect,int first,int last){
    if(first<last){
        cout<<endl;
    int mid=(last+first)/2;
    cout<<first<<mid<<last;
    mergeSort(vect,first,mid);
    
    mergeSort(vect,mid+1,last);
//sortK(vect,first,mid,mid+1,last);
    }

}
//------------------------------------driver code----------------------------
int main(){
int T; //T means TestCases
cout<<"Enter TestCase : ";
cin>>T;
while(T){

vector<int> vect1={5,6,3,2,9,8,1,7,2,4};
//vector<int> vect2;

//---------Vectors Reading ----------------- 
// for(int i=0;i<10;i++){
// vect1.push_back(rand()*100);
// vect2.push_back(rand()*100);
// }

//---------function call Feild-------------
int N=vect1.size()-1;
mergeSort(vect1,0,N);
//---------OutPut Feild---------------------
vector<int>::iterator it=vect1.begin();
for(;it!=vect1.end();it++){
cout<<*it<<" ";
}

cout<<endl;
T--;
}
return 0;
}