// check if the ith bit is set or not

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
bool checkBitSetOrNot(int N, int K)
{
    // we can create mask for kth Position and Perform the and(&) Operation
    // to get kth bit of number
    int mask = 1 << (K - 1);
    if (N & mask)
        return true;
    else
        return false;
}
//------------------------------------driver code------------------------------
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N; // number
        int K; // for kth position
        cin >> N >> K;
        if (checkBitSetOrNot(N, K))
        {
            cout << "yes it is." << endl;
        }
        else
        {
            cout << "No its not." << endl;
        }
    }
    return 0;
}