//findProductSumDifference
#include <bits/stdc++.h> 
int findProductSumDifference(int n){
	// Write your code here
	int digits_sum=0, digits_product=1;
	for(; n>0;n/=10) {
		digits_sum += (n%10);
		digits_product *= (n%10);
	}
	return digits_product - digits_sum;
}
