//Factorials Division
#include <bits/stdc++.h> 
int boringFactorials(int n, int p)
{
	// Write your code here.
	int fact = 1;
	if(n == 0) {
		fact = 1;
	}
	for(int i=1; i<=n; i++) {
		fact *= i;
	}
	int result = fact%p == 0? 0 : (fact%p);
	return result;
}
