//smallestNumber
#include <bits/stdc++.h> 
#include <string>
#include <cmath>
string smallestNumber(int n, int k)
{
	// Write your code here
	int result = -1, upper_limit =0, lower_limit=0;
	
	if(n == 1 && k == 0) {
		return to_string(0);
	}
	if(n == 1) {
		lower_limit = 1;
		upper_limit = 9;
	}
	else {
		lower_limit = pow(10,n-1);
		upper_limit = pow(10, n);
	}
	
	for(int i=lower_limit; i<=upper_limit; i++) {
		int sum = 0;
		for(int j=i; j>0; j/=10) {
			sum+= (j%10);
		}

		if(sum == k) {
			result = i;
			break;
		}
	}

	return to_string(result);
}
