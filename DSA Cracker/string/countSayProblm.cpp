#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
string countSay(string s){
    string ans="";  //yaha par extra string liyo jisme hum ans store karenge 
    int i = 0; 
     //manlo ye ek pointer hai first index par raklo
    for(int j = 0; j<=s.size(); j++){ //for loop lagao taki string traverse kar sake
        if(s[i]!=s[j]){ //ye hai hamari main condition jaha par hamari window hit hogi
            ans += to_string(j-i);      //agar window hit haogai to hum us window ki length ko aur 
            ans +=s[i];                 //aur us letter ko ans me add karenge 
            i=j;                        //aur nayi window start karenge jahan par window hit huwi thi waha se 
        }
    }
    return ans;
}
/*example
s = aaabbc
1st iteration : i = 0 j = 0 s[i] = a, s[j]=a condition false move j
2nd iteration : i = 0 j = 1 s[i] = a, s[j]=a condition false move j
3rd iteration : i = 0 j = 2 s[i] = a, s[j]=a condition false move j
4th iteration : i = 0 j = 3 s[i] = a, s[j]=b condition true ans+=3 (ie j-i) &ans+=a (letter)
                 start i from j(so i==j)  move j
5th iteration : i = 3 j = 4 s[i] = b, s[j]=b condition false move j
6th iteration : i = 3 j = 5 s[i] = b, s[j]=c condition true ans+=2 (ie j-i) &ans+=b (letter)
                 start i from j(so i==j)  move j
7th 6th iteration : i = 5 j = 6 s[i] = c, s[j]=" "(out of string "NUll char") or condition true ans+=1 (ie j-i) &ans+=c (letter)
                 start i from j(so i==j)  move j
return ans = 3a2b1c     
*/
//------------------------------------driver code------------------------------
int main(){
int T;
cin>>T;
while(T--){
string s;
cin>>s;
string str = countSay(s);
cout<<str;
}
return 0;
}