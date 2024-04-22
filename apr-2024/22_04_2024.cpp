//maximumDifference
#include <bits/stdc++.h> 
string maximumDifference(int n, vector<int>& arr)
{
	// Write your code here.
	int max=0, min=arr[0];
	for(int i=0; i<n; i++) {
		if(arr[i]>max) {
			max = arr[i];
		}

		if(arr[i]<min) {
			min = arr[i];
		}
	}

	if((max-min)%2 == 0) {
		return "EVEN";
	}
	else {
		return "ODD";
	}
}
