//copyAndReverse
#include <bits/stdc++.h> 
vector<int> copyAndReverse(vector<int> arr, int n) {
	// Write your code here.
	for(int i=0, j=arr.size()-1; i<=j; i++, j--) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	return arr;
}	
