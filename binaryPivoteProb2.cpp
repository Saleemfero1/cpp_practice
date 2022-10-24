#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int pivote(vector<int> arr, int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;
        if (arr[mid] < arr[mid - 1] && arr[mid] < arr[mid +1])
        {
            return mid;
        }

        if (arr[0] < arr[mid])
        {
            start = mid; 
        }
        if (arr[0] > arr[mid])
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    vector<int> arr;
    int N, T = 1, X, Key;
    while (T--)
    {
        cout << "enter The Number Of Elements: ";
        cin >> N;
        cout << "Enter The Elements : " << endl;
        for (int i = 0; i < N; i++)
        {
            cin>>X;
            arr.push_back(X);
        }
        int p = pivote(arr, N);
        cout << "Pivote Element Found At index: " << p << endl;
        cout << "Pivote Element is " << arr[p]<< endl;
    }

    return 0;
}