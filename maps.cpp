#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int maxi(vector<int> &A)
{
    int maxi = INT_MIN;
    //in this function N is updated value of array when we delete our max value
    int N = A.size();
    
    // finding max value
     maxi=A[N-1];
    // // deleting maxi value
    A.pop_back();
    return maxi;
}

int energyFind(vector<int> &A, int E, int N)
{
    int count = 0;
    
    while (A.size() && E > 0)
    {
        int maxiR = maxi(A);
        int size = A.size();

        while (E > 0)
        {
            E = E - maxiR;
            count++;
            if (E > 0)
            {
                E = E - maxiR;
                count++;
                break;
            }
        }
        
    }
 if(E<=0)
 return count;
 else
 return-1;
}

int main()
{
    vector<int> vect;
    int N, E, x;
    cin >> E;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        vect.push_back(x);
    }
    sort(vect.begin(),vect.end());
    cout << energyFind(vect, E, N);
    return 0;
}