#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> nums, int key)
{
int low=0,high=nums.size()-1;
 int mid = low + (high - low) / 2;
    while (low <= high)
    {
       
        if (key == nums[mid])
            return mid;
        if (nums[mid]<key)
            low = mid + 1;
        else
            high = mid - 1;
        mid = low + (high - low) / 2;
    }
    return mid;
}
int main()
{
    vector<int> nums;
    int n, key;
    cout << "enter the number of elements : ";
    cin >> n;
    cout << "enter elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> key;
        nums.push_back(key);
    }
    for (auto z : nums)
    {
        cout << z << " ";
    }
    int val;
    cout << endl
         << "enter key search: ";
    cin >> val;
    int mid = binarySearch(nums, val);
    cout << mid;
    return 0;
}