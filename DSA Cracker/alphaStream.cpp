// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// //---------------------------write your function code here!------------------

// //------------------------------------driver code------------------------------
// int main(){
// int T;
// cin>>T;
// while(T--){
// int X,Y;
// cin>>X;
// cin>>Y;
// int ans =  0;
// int count = 0;
// while(X){   
// count++;
// X--;
// ans++;
// if(count==Y){
//         X++;
//         count = 0;
//     }
// }
// cout<<ans;
// }
// return 0;
// }


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// //---------------------------write your function code here!------------------

// bool PrintXY(int a, int b, int n)
// {
//     for (int i = 0; i * a <= n; i++) {

//         if ((n - (i * a)) % b == 0) {
//             return 1;
//         }
//     }

//    return 0;
// }


// //------------------------------------driver code------------------------------
// int main(){
// int T;
// cin>>T;
// while(T--){
// int A,B,C;
// cin>>A>>B>>C;
// cout<<PrintXY(A,B,C)<<endl;
// }
// return 0;
// }

//-------------------hockey
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// //---------------------------write your function code here!------------------ho
// void hockey(string s){
// int i =0;
// for(int j = 0;j<s.size();j++){
    
//     if(j-i+1==7){
//         cout<<"Yes";
//         return;
//     }
//     if(s[j]=='0'){
//         i = j;
//     }
// }
// cout<<"No";
// }
// //------------------------------------driver code------------------------------
// int main(){
// int T;
// cin>>T;
// while(T--){
// string s;
// cin>>s;
// hockey(s);
// }
// return 0;
// }


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// //---------------------------write your function code here!------------------
// int solve(int arr[],int n){
// int i = 0;
// int maxi = 0;
// for(int j =1;j<n;j++){


//     if(arr[j]>arr[j+1] || j==n-1){
//         maxi = max(maxi,j-i);
//         i = j;
//     }
// }
// return maxi; 
// }
// //------------------------------------driver code------------------------------
// int main(){
// int T;
// cin>>T;
// while(T--){
//     int N;
//     cin>>N;
//     int arr[500];
//     for(int i =0;i<N;i++){
//         cin>>arr[i];
//     }
   
//     cout<<solve(arr,N)<<endl    ;   
// }
// return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int replaceDig(int x, int from, int to)
// {
// 	int result = 0;
// 	int multiply = 1;

// 	while (x > 0)
// 	{
// 		int reminder = x % 10;

// 		if (reminder == from)
// 			result = result + to * multiply;

// 		else
// 			result = result + reminder * multiply;

// 		multiply *= 10;
// 		x = x / 10;
// 	}
// 	return result;
// }


// void calculateMinMaxSum(int x1, int x2)
// {
// 	int minSum = replaceDig(x1, 6, 5) +
// 				replaceDig(x2, 6, 5);

// 	int maxSum = replaceDig(x1, 5, 6) +
// 				replaceDig(x2, 5, 6);
// 	cout <<minSum<< " " << maxSum<<endl;
// }

// int main()
// {
// 	int x,y;
//     cin>> x>>y;
// 	calculateMinMaxSum(x, y);
// 	return 0;
// }

// // C++ program to find the number of
// // boxes to be removed
// #include <bits/stdc++.h>
// using namespace std;

// // Function to find the number of
// // boxes to be removed
// int totalBoxesRemoved(int arr[], int n)
// {
// 	int count = 0;

// 	// Store height of previous pile
// 	int prev = arr[0];

// 	// Start traversing the array
// 	for (int i = 1; i < n; i++) {
// 		// if height of current pile is greater
// 		// than previous pile
// 		if (arr[i] > prev) {
// 			// Increment count by difference
// 			// of two heights
// 			count += (arr[i] - prev);

// 			// Update current height
// 			arr[i] = prev;

// 			// Update prev for next iteration
// 			prev = arr[i];
// 		}
// 		else {
// 			// Update prev for next iteration
// 			prev = arr[i];
// 		}
// 	}

// 	return count;
// }

// // Driver code
// int main()
// {
// 	int arr[] = {2,5};

// 	int n = sizeof(arr) / sizeof(arr[0]);

// 	cout << totalBoxesRemoved(arr, n);

// 	return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int findLongestSub(string bin)
{
	int n = bin.length(), i;
	int sum = 0;
	unordered_map<int, int> prevSum;

	int maxlen = 0;
	int currlen;

	for (i = 0; i < n; i++) {
		if (bin[i] == 'A')
			sum++;
		else
			sum--;
		if (sum > 0) {
			maxlen = i + 1;
		}

		else if (sum <= 0) {
			if (prevSum.find(sum - 1) != prevSum.end()) {
				currlen = i - prevSum[sum - 1];
				maxlen = max(maxlen, currlen);
			}
		}

		
		if (prevSum.find(sum) == prevSum.end())
			prevSum[sum] = i;
	}

	return maxlen;
}


int main()
{
	string s;
	cin>>s;
	cout << findLongestSub(s);
	return 0;
}
 