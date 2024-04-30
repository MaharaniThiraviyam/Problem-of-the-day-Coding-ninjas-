//sumOrProduct
#include <bits/stdc++.h> 
long long int sumOrProduct(long long int n, long long int q)
{
	// Write your code here.
	long long int res = 0; 
	
	if(q == 1) {
		res = (n * (n+1))/2;
	}
	else {
		res = 1;
		for(long long int i=1; i<=n; i++){
			res = (res *i) % (1000000007);
		}
		//res = (res) % (1000000007);
	}
	return res;
}
