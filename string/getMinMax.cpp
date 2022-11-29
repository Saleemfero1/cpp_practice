#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//---------------------------write your function code here!------------------
struct pair1
{
    int min;
    int max;
};

pair1 getMInMax(int arr[], int N)   
{
    struct pair1 minmax;
    if (N == 1)
    {
        minmax.min = arr[0];
        minmax.max = arr[0];
        return minmax;
    }
    minmax.min = INT_MAX;
    minmax.max = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < minmax.min)
            minmax.min = arr[i];
        if (arr[i] > minmax.max)
            minmax.max = arr[i];
    }
    return minmax;
}
//------------------------------------driver code------------------------------
int main()
{
    int T, N;
    int arr[100];
    cout << "Number of Test Cases [T]: ";
    cin >> T;
    while (T--)
    {
        cout << "Enter the value of N : ";
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        struct pair1 minmax = getMInMax(arr, N);
        cout << "minimum Element is : " << minmax.min << endl;
        cout << "maximum Element is : " << minmax.max << endl;
    }
    return 0;
}