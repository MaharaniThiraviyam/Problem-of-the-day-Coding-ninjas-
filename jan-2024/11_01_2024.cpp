//beautifulIndex
#include <bits/stdc++.h> 
int beautifulIndex(int N, vector<int> A)
{
	// Write your code here.
	int overall_sum=0, i, current_sum=0, temp=0;

	for(i=0; i<N; i++) {
		overall_sum += A[i];
	}
	
	for(i=1; i<N; i++) {
		current_sum += A[i-1];
		temp = current_sum + A[i];
		
		if(current_sum == (overall_sum-temp)) {
			return i+1;
		}
	}
	return -1;
}
