//valid paranthese
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    stack<char> stk;
    int n = s.size();

    for (int i = 0; i < n; i++)
    {

        if (s[i] == '[' || s[i] == '{' || s[i] == '(')
        {
            stk.push(s[i]);
            continue;
        }

        if (!stk.empty())
        {
            if (stk.top() == '{' && s[i] == '}' || stk.top() == '[' && s[i] == ']' ||
                stk.top() == '(' && s[i] == ')')
                stk.pop();
            else
                return false;
        }
        else
            return false;
    }
    if (stk.empty())
        return true;
    else
        return false;
}

int main()
{
    string s;
    int T;
    cin >> T;
    while (T)
    {
        cin >> s;
        cout << isValid(s);
        T--;
    }
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution
// {
// public:
//     bool isPalindrome(ListNode *head)
//     {
//         if (head == NULL)
//             return 0;

//             ListNode *temp;
//             int len = 0;
//             while (temp != NULL)
//             {
//                 len++;
//                 temp = temp->next;
//             }

//             stack<int> stk;
//             int mid = len / 2;
//             ListNode *temp;
//             int i = 0 ;
//             while (temp != NULL)
//             {
//                 if (i < mid)
//                 {
//                     stk.push(temp->val);
//                     i++;
//                     temp = temp->next;
//                     continue;
//                 }
//                 if (len % 2 == 0 && temp->value == stk.top())
//                 {
//                     stk.pop();
//                     temp = temp->next;
//                 }
//                 else if (len % 2 == 1)
//                 {
//                     temp = temp->next;
//                     if (temp->val == stk.top())
//                     {
//                         stk.pop();
//                     }
//                     else
//                         return false;
//                 }
//             }
//             if (stk.empty())
//                 return true;
//             else
//                 return false;
//         }
//     };


// method 2 : valid paranthese
// bool isValid(string s) {
//  int n = s.size();
//        if(n%2 == 1)
//             return false;
//     stack<int>st;
//     for(int i=0; i<n;i++){
//         if(s[i] == '{' || s[i] =='(' || s[i]=='['){
//         st.push(s[i]);
//         }else if(st.top()=='{' && s[i]=='}' || st.top()=='[' && s[i]==']' || st.top()=='(' && s[i]==')'){
//             st.pop();
//         }else{
//             return false;
//         }
//     }
//     if(st.empty())
//         return true;
//     else
//         return false;

// }