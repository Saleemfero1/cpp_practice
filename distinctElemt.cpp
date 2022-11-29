#include <bits/stdc++.h>
using namespace std;
int  findMinimumDistinct(vector<int>A, int N, int K)
{
	unordered_map<int, int> mp;

	for (int i = 0; i < N; i++)
		mp[A[i]]++;
	int count = 0;
	int len = 0;
	vector<int> counts;
	for (auto i : mp)
		counts.push_back(i.second);
	sort(counts.begin(), counts.end(),
		greater<int>()); 
	for (int i = 0; i < counts.size(); i++) {
		if (len >= K)
			break;
		len += counts[i];
		count++;
	}
	return count;
}

// Driver Code
int main()
{
	int N;
	int K;
    vector<int>A;
    cin>>N;
    cin>>K;
	for(int i = 0; i<N; i++){
        int data;
        cin>>data;
        A.push_back(data);
    }
	cout<<findMinimumDistinct(A, N, K);

	return 0;
}
