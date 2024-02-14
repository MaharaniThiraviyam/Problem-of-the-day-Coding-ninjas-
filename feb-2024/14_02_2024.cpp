//boringFactorials
#include <bits/stdc++.h> 
int boringFactorials(int n, int p)
{
	// Write your code here.
	int factorialValue = 1;
	for(int i=1; i<=n; i++) {
		factorialValue = (factorialValue * i)%p;
	}

	return factorialValue;
}
