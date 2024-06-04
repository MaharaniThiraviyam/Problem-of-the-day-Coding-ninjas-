//copyAndReverse
#include <bits/stdc++.h> 
vector<int> copyAndReverse(vector<int> arr, int n) {
	// Write your code here.
	vector<int> copy_arr;
	for(int i=n-1; i>=0; i--) {
		copy_arr.push_back(arr[i]);
	}

	return copy_arr;
}	
