#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int  SelectioSort(int arr[], int n)
{
    int flag=1;
    for (int j = 0; j < n; j++)
    {
        for (int i = j + 1; i < n; i++)
        {
            if (arr[j] > arr[i])
            {
                swap(arr[j], arr[i]);
                flag=0;
            }
        }
        if(flag==1){
            return 1;
        }
    }
    return 0;
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
    int p = SelectioSort(arr, n);
    if(p==1){
        cout<<"array is sorted ......!"<<endl;
    }
    else{
        cout << "after sorting : ";
        for (int i = 0; i < n; i++)
        cout << arr[i];
    }
    
    return 0;
}