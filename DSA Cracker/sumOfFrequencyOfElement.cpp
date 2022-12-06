#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

//------------------------------------driver code------------------------------
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        vector<string> vect;
        vector<string> vect2;
        int N, M;
        cout << "enter number of Elements :";
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            string data;
            cin >> data;
            vect.push_back(data);
        }
        cout << endl
             << "Enter the M value :";
        cin >> M;
        for (int i = 0; i < M; i++)
        {
            string data;
            cin >> data;
            vect2.push_back(data);
        }

        //--------------------------map me dalo---------------------
        map<string, int> m;
        for (auto x : vect)
        {
            m[x]++;
        }

        //-----------------------values ko sum karo-----------------
        int sum = 0;
        for (auto x : vect2)
        {
            sum += m[x];
        }
        cout << "sum of frequency of given Element :" << sum << endl;
    }
    return 0;
}