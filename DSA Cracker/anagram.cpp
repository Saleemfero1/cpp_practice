//program for check valid anagram time complexity O(n)
//use one map and store txt1 occurence and minus occurence of second txt
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//----------------write ur code here--------------------
bool validAnagram(string txt1,string txt2){
map<char,int>box1;
int count=0;
for(int i=0;i<txt1.size();i++)
{
  char ch=txt1[i];
  box1[ch]++;
}
for(int i=0;i<txt1.size();i++)
{
  char ch=txt2[i];
  box1[ch]--;
}
map<char ,int >::iterator it =box1.begin();
for(;it!=box1.end();it++){
    if(it->second!=0){
        return false;
    }
}
return true;
}
//driver code 
int main(){
    string txt1,txt2;
    int T;//Test Cases
    cout << "Test Cases : ";
    cin>>T;
    while (T--)
    {
        cout<<"Enter input for TestCase "<<T+1<<endl;
        cin>>txt1;
        cin>>txt2;
        cout<<"output " <<validAnagram(txt1,txt2);
        cout<<endl;
    }
    return 0;
}