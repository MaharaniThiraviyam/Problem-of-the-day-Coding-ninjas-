//maxSubarraySum
#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int N) 
{
	// Write Your Code here   
	int max_current = arr[0];
	int max_global = arr[0];

	for (size_t i = 1; i<N; i++) {
		max_current = std::max(arr[i], max_current + arr[i]);
		if (max_current > max_global) {
			max_global = max_current;
		}
	}

	return max_global;
}
