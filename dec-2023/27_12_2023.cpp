//dominantNumber
#include <bits/stdc++.h> 
int dominantNumber(int* arr, int n) 
{
	// Write your code here.
	int res = -1;
	int num_arr[10] = {0};
	for(int i=0; i<n; i++) {
		if((num_arr[arr[i]]) > ((n/3) -1)) {
			return arr[i];
		}
		else {
			num_arr[arr[i]] += 1;
		}
		
	}

	return res;
}
