#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------

int gcd(int x, int y) 
{
    return __gcd(x, y);
}

bool isCoprime(int x, int y) 
{
    return __gcd(x, y);
}

int lcm(int x, int y) 
{
    long long LCM = x;
    LCM *= y;
    LCM /= gcd(x, y);
    return LCM;
}
vector<long long> solve(int N,vector<long long> Arr)
{

    vector<long long> ans;
    int n = Arr.size();
    ans.push_back(Arr[0]);
    for (int i = 1; i < n; i++)
    {
        int curr = Arr[i];
        while (ans.size() && !isCoprime(ans.back(), curr))
        {
            int top = ans.back();
            ans.pop_back();
            curr = lcm(curr, top);
        }
        ans.push_back(curr);
    }
    return ans;
}
//------------------------------------driver code------------------------------
int main()
{
    vector<long long> A;
    int N, T;
    cin >> T;
    while (T--)
    {
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            int data;
            cin >> data;
            A.push_back(data);
        }
        vector<long long> vect = solve(N,A);
        for (auto x : vect)
        {
            cout << x << " ";
        }
    }
    return 0;
}