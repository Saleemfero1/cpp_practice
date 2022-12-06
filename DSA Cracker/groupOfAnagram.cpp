//group of anagranm somethibn problem element nsert karn ke bad delete karne me 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//----------------write ur code here--------------------
bool validAnagram(string txt1,string txt2,vector<string>&dupVect){
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
dupVect.push_back(txt2);
return true;
}

vector<vector<string>>groupOfAnagram(vector<string> vect){
    vector<vector<string>>mainVect;
    vector<string>dupVect;
    for(int i=0;i<vect.size();i++){
        string txt1=vect[i];
        dupVect.push_back(txt1);
        for(int j=i+1;j<vect.size();j++){
            string txt2=vect[j];
           bool M= validAnagram(txt1,txt2,dupVect);
            if(M==false){
                continue;
            }else{
                string del =vect[j];
                vect[j].erase();
                cout<<"erase hora "<<del<<endl;
            }
        }
        mainVect.push_back(dupVect);
        dupVect.clear();
    }
    return mainVect;

}

//driver code 
int main(){
    string txt1,txt2;
    int T;//Test Cases
    cout << "Test Cases : ";
    cin>>T;
    while (T--)
    {
        int N;
        cin>>N;
        vector<string>vect;
        for(int i=0;i<N;i++){
            string x;
            cin>>x;
            vect.push_back(x);
        }
        //--------------function call------------------
        vector<vector<string>>mainVect = groupOfAnagram(vect);
         for(int i=0;i<mainVect[i].size();i++){
            cout<<"row1 "<<endl;
            for(int j=0;j<mainVect[i].size();j++){
                cout<<mainVect[i][j]<<" ";
            }
            cout<<endl;
         }
        cout<<endl;
    }
    return 0;
}