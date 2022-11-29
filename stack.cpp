#include <iostream>
#include <bits/stdc++.h>
#define MAXSIZE 20
int top = -1;
char stack1[MAXSIZE];
using namespace std;

void balancing()
{
    string str;
    cout << "enter the string : ";
    cin >> str;

    for (int i = 0; i <= str.size(); i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            char x = str[i];
            top++;
            stack1[top] = x;
            continue;
        }
        if (stack1[top] == '(' && str[i] == ')' || stack1[top] == '[' && str[i] == ']' || stack1[top] == '{' && str[i] == '}')
        {
            top--;
        }
        else
        {
            return;
        }
    }
    if (stack1[top] == 0)
    {
        cout << "brackets are balance :" << endl;
    }
}

void display()
{
    if (top == -1)
    {
        cout << "balanced brackets " << endl;
        return;
    }
    cout << "unbalanced brackets : " << endl;
    cout << "remaining brackets in stack:";
    for (int i = top; i >= 0; i--)
    {
        cout << stack1[i] << " ";
    }
}

int main()
{
    balancing();
    display();
    return 0;
}