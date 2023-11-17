//Print the Kth Digit
#include <bits/stdc++.h> 
int findKthFromRight(int n, int m, int k) 
{
	// Write your code here.
	int i, digit=0;
	long int  power_value = 1;
	for(i=1; i<=m; i++) {
		power_value *= n;
	}
	
	for(i=1; power_value>0; power_value/=10, i++) {
		if(i == k) {
			digit = power_value %10;
		}
	}
	return digit;
}
