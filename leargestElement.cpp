// find the lergest two elements

#include <iostream>
using namespace std;

int FindLeargestElement(int arr[], int n, int &loc1)
{
    int max = arr[0], loc2;
    int SecMax = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            int SecMax = max;
            max = arr[i];
            loc2 = loc1;
            loc1 = i;
        }
    }
      cout << "First leargest element : " << arr[loc1] << endl;
     cout << "second leargest element : " << arr[loc2] << endl;
    return (loc1);
}

int main()
{
    int arr[10], loc = 0, n;

    cout << "enter the number of element in array: ";
    cin >> n;
    cout << "enter the elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    FindLeargestElement(arr, n, loc);
    return 0;
}