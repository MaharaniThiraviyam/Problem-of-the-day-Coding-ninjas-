// Find MSB In O(1) 
#include <bits/stdc++.h> 
int findMSB(int n){
	// Write your code here
	int res = 1;
	int i = 0;
	for(; res < n; res*=2);
		if(res > n) {
			return res/2;
		}
		else if (res == n) {
			return res;
		}
	
}
