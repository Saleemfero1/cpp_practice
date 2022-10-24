// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// //---------------------------write your function code here!------------------
// int countChar(string s, char k)
// {
//     map<char, int> store;
//     for (int i = 0; i < s.size(); i++)
//     {
//         store[s[i]]++;
//     }
//     for (auto x : store)
//     {
//         if (x.first == k)
//             return x.second;
//     }
//     return 0;
// }
// //------------------------------------driver code------------------------------
// int main()
// {
//     string s;
//     char k;
//     cin >> s;
//     cin >> k;
//     cout << countChar(s, k);
//     return 0;
//
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
   int getMinDiff(int arr[], int n, int k) {
        int mini =INT_MAX, maxi = INT_MIN; 
        for(int i = 0; i < n; i++){
            if(arr[i]<=k){
                arr[i]+=k;
            }else{
                arr[i]-=k;
            }
            if(mini>arr[i])
                mini = arr[i];
            if(maxi<arr[i]);
                maxi = arr[i];
        }
        cout<<"min : "<<mini<<" "<<"max : "<<maxi<<endl;
        return maxi-mini;
    }
//------------------------------------driver code------------------------------
int main(){
int T;
cin>>T;
while(T--){
    int N;
    int K;
    int arr[100];
    cin>>K;
    cin>>N;
    for(int i = 0; i < N; i++){
        cin>>arr[i];
    }
    cout<<getMinDiff(arr,N,K);
}
return 0;
}