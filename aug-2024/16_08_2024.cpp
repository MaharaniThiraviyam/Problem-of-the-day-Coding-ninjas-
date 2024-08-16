//beautifulIndex
#include <bits/stdc++.h> 
int beautifulIndex(int N, vector<int> A)
{
	// Write your code here.
	long long total_sum = 0;
	for(int i=0; i<N; i++) {
		total_sum += A[i];
	}

	long long left_sum = 0;
	for(int i=0; i<N; i++) {
		total_sum -= A[i];

                if (left_sum == total_sum) {
                  return i + 1;
                }

                left_sum = A[i];
        }

	return -1;
}
