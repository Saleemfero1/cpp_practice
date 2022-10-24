#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void UniqElement(int arr[], int n)
{
    int i = 0;
    int duplicate = 0;
    int missing = 0;

    while (i < n)
    {
        if (arr[i] != i + 1)
        {
            if(arr[i]==arr[arr[i]-1]){
                duplicate = arr[i];
                missing = i+1;
                i++;
                continue;
            }
            swap(arr[i], arr[arr[i]-1]);
        }else{
             i++;
        }
    }        
       

    cout << "after sort : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<"missing Element : "<<missing<<endl;
    cout<<"duplicate Element : "<<duplicate<<endl;
}

int main()
{

    int arr[10];
    int n;

    cout << "Enter the Number of Array :";
    cin >> n;

    cout << "Enter the Elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    UniqElement(arr, n);
    return 0;
}