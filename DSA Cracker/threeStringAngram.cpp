// C++ implementation of the approach
// Function that returns true if a and b
// are anagarams of each other
#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string a, string b, string c)
{

	if (a.length() != b.length() || a.length() != c.length()) {
		return false;
	}
	unordered_map<char, int> Map;
	
	for (int i = 0; i < a.length(); i++) {
		Map[a[i]]++;
	}
	// Now loop over String b
	for (int i = 0; i < b.length(); i++) {
		
		if (Map.find(b[i]) != Map.end()) {
			
			Map[b[i]] -= 1;
		}else{}
		else {
			return false;
		}
	}

	// Loop over all keys and check if all keys are 0.
	// If so it means it is anagram.
	for (auto items : Map) {
		if (items.second != 0) {
			return false;
		}
	}
	// Returning True as all keys are zero
	return true;
}

// Driver code
int main()
{
	string str1 = "gram";
	string str2 = "arm";
    string str3 = "grgm";

	// Function call
	if (isAnagram(str1, str2, str3))
		cout << "The two strings are anagram of each other"<< endl;
	else
		cout << "The two strings are not anagram of each "
				"other"
			<< endl;
}

// This code is contributed by shinjanpatra
