#include <iostream>
#include <bits/stdc++.h>
using namespace std;
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
    for (auto i : nums)
    {
        cout << i << " ";
    }
    int val;
    cout << "Enter the value : " << endl;
    cin >> val;
    int j = 0;
    int nsize = nums.size();
    for (int i = 0; i < nsize; i++)
    {
        if (nums[i] != val)
        {
            nums[j] = nums[i];
            j++;
        }
    }
    vector<int>::iterator sa;
    for (sa = nums.end(); sa != nums.begin() + j; sa--)
    {
        nums.pop_back();
    }
    for (auto z : nums)
    {
        cout << z << " ";
    }
}
