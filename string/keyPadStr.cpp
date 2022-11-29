#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
void onkeyPad(string num,string keyPad[],vector<string> &result,int currIndex,string ans){
    if(currIndex>=num.size()){
        result.push_back(ans);
        return;
    }
    int digit = num[currIndex] - '0';//pahele digit ko nikalo
    string value = keyPad[digit];//aur uske correspond string nikalo
    for(int i=0;i<value.length();i++){//aur us string recc call maro 
        ans.push_back(value[i]);
        onkeyPad(num,keyPad,result,currIndex+1,ans);
        ans.pop_back();//jab mai wapas lautung to backtrack karke ek element nikalunga jo dala
        //tha taki mai previous state ko pahunchu
    }


}
vector<string>checKey(string num,string keyPad[]){
    vector<string>result;
    string ans;
    onkeyPad(num,keyPad,result,0,ans);
    return result;
}
//------------------------------------driver code------------------------------
int main(){
    string num;
    int T;
    string keyPad[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    cin>>T;
    while (T--)
    {
        cout<<"Enter the number : ";
        cin>>num;
        vector<string>result = checKey(num,keyPad);
        for(auto x:result){
            cout<<x<<" ";
        }
    }
return 0;
}

// map<char,string>::iterator itr;    
    // for(itr=keyPad.begin();itr!=keyPad.end();itr++){
    //     cout<<itr->first<<itr->second<<endl;
    // }