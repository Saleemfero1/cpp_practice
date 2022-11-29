#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
int findOccOfAnagram(string s1)
{
    int N1 = s1.size();
    int i = 0;
    int ans = 0;
    map<char, int> Map1;

    for (int j = 0; j < N1; j++)
    {
       Map1[s1[j]]++;
       if(Map1[s1[j]]>1){   
        ans=max(ans,j-i);
        Map1.clear();
        i=j;
        j--;
       }
       for(auto x:Map1){
        cout<<x.first<<x.second;
       }cout<<endl;

    }
    return ans;
}
//------------------------------------driver code------------------------------
int main()
{
    string s1;
    cin >> s1;
    cout << findOccOfAnagram(s1);
    return 0;
}