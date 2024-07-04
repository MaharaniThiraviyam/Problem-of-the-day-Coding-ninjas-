//findProductSumDifference
#include <bits/stdc++.h> 
int findProductSumDifference(int n){
	// Write your code here
	int sum=0, product=1;
	for(; n>0; n/=10) {
		int digit = n%10;
		sum += digit;
		product *= digit;
	}
	return product - sum;
}
