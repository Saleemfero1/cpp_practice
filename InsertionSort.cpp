#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void SelectioSort(int arr[], int n)
{

    for (int j = 0; j < n; j++)
    {
         int min = j;
        for (int i = j + 1; i < n; i++)
        {
            if(arr[min])
            if (arr[i] < arr[min])
                min = i;
        }
        swap(arr[j], arr[min]);
    }
}
int main()
{
    int arr[20];
    int n;

    cout << "Enter the number of elements";
    cin >> n;
    cout << "Enter the Elements : " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    SelectioSort(arr, n);
    cout << "after sorting : ";
    for (int i = 0; i < n; i++)
        cout << arr[i];
    return 0;
}