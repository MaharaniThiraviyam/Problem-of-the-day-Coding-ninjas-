#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
	// Write your code here.
	int min=0, max=0, i;
	for(i=0; i<n; i++) {
		if(i == 0) {
			min = arr[i];
			max = arr[i];
		}

		if(arr[i] < min) {
			min = arr[i];
		}

		if(arr[i]> max) {
			max = arr[i];
		}
	}

	return (min+max);
}
