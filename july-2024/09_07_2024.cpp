//countSetBits
#include <bits/stdc++.h> 
int countSetBits(int n)
{
	// Write your code here. 
	int count = 0;
	for(; n>0; n/=2) {
		if(n%2 == 1) {
			count++;
		} 
	}

	return count;
}
