#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
int findOccOfAnagram(string s1, string s2)
{
    int N1 = s1.size();
    int N2 = s2.size();
    int i = 0;
    int ans = 0;
    map<char, int> Map2;
    map<char, int> Map1;
    for (int k = 0; k < N2; k++)
    {
        Map1[s2[k]]++;
    }
    for (int j = 0; j < N1; j++)
    {
        Map2[s1[j]]++;
        if (j - i + 1 == N2)
        { // if we reach once window condition perform calculation
            if (Map1 == Map2)
            {
                ans++;
            }
            if (Map2[s1[i]] > 1)
            {
                Map2[s1[i]]--; // agar occurence 1 se jiyada hai to hum minus karenge
            }
            else
            {
                Map2.erase(s1[i]); // agar ek hi occurence hai to delete arenge
            }
            i++; // window maintain karenge i ko aage badake
        }
    }
    return ans;
}
//------------------------------------driver code------------------------------
int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    cout << findOccOfAnagram(s1, s2);
    return 0;
}