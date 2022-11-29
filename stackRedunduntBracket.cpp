#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
bool redunduntBrackets(string s)
{
    stack<int> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (  s[i] == '(' ||  s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            st.push(s[i]);
        }
        else if(s[i] == ')')
        {
           if(st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')
            {
                while(st.top()!='('){
                    st.pop();
                }
                st.pop();

            }else{
                return true;
            }
        }
    }//(a+b+(c+d))
    return false;
}
//------------------------------------driver code------------------------------
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        cout << redunduntBrackets(s);
    }
    return 0;
}