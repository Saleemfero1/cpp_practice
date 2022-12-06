#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// bool isItPalindrome(char str[]){
//     int i=0;
//     int j=strlen(str)-1;
//     while (i<j)
//     {
//         if(str[i]!=str[j]){
//             return false;
//         } 
//         i++;
//         j--;
//     }
//     return true;
//}

// convert capital letter and check
char islowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z' || ch>='0' && ch<='9')
    {
        return ch;
    }
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch - 'A' + 'a';
    }
    return '!';
}
bool isItPalindrome(char str[])
{
    int i = 0;
    int j = strlen(str) - 1;
    while (i < j)
    {
        if(islowerCase(str[i])=='!'){
             i++;
             continue;
       }
       if(islowerCase(str[j])=='!'){
            j--;
            continue;
       }
        if(islowerCase(str[i])!= islowerCase(str[j])){
            return false;
        }
       i++;
       j--; 
    }
    return true;
}
int main()
{
    char str[100];
    cout << "Enter the string : ";
    cin >> str;
    cout << "is it palindrome : " << isItPalindrome(str);
}