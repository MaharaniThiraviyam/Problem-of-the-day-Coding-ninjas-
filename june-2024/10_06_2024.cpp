//getMaximumHouses
#include <bits/stdc++.h> 
int getMaximumHouses(int k, int l)
{
	//	Write you code here.
	int res = 1;
	for(int i=1; i<=l; i++) {
		res *= 2;
	}

	return res-k;
}
