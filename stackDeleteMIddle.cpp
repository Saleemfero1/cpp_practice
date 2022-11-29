// delete middle element from  stack
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void deleteMiddle(stack<int> &stk, int count, int N)
{
    // base case
    if (count == N / 2)
    {
        stk.pop();
        return;
    }
    // recursive call
    int num = stk.top();
    stk.pop();
    deleteMiddle(stk, count + 1, N);
    stk.push(num);
}

void solve(stack<int> &stk)
{
    int count = 0;
    int N = stk.size();
    deleteMiddle(stk, count, N);
}
int main()
{
    stack<int> stk;
    int n;
    cout << "enter the number of elemet :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        stk.push(x);
    }
    solve(stk);
    // display stack by poping element
    while (!stk.empty())
    {
        cout << stk.top() << " ";
        stk.pop();
    }
    return 0;
}