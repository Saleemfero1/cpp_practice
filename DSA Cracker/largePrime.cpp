
#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int x)
{
	if (x <= 1)
		return false;

	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0)
			return false;
	}

	return true;
}

void largestPrime(string s)
{

	vector<pair<string, int> > vec{ { "", 0 } };
	int ans = 0;
	for (int i = 0; i < s.length(); i++) {
	
		int n = vec.size();

		
		for (int j = 0; j < n; j++) {

			pair<string, int> temp = vec[j];

			
			string str = temp.first;

			int val = temp.second;
			if (s[i] == '1') {
			
				temp.first = str + '1';
				temp.second = ((val << 1) + 1);
			}
			else {
				temp.first = str + '0';
				temp.second = ((val << 1) + 0);
			}

		
			vec.push_back(temp);
			int check = temp.second;
			if (isPrime(check)) {
				ans = max(ans, check);
			}
		}
	}
	if (ans == 0)
		cout << -1 << endl;
	else
		cout << ans << endl;
}

// Driver Code
int main()
{
	// Input String
	string s = "110";

	largestPrime(s);

	return 0;
}
