
//findIndexOf
//findIndexOf
#include <bits/stdc++.h> 
int findIndexOf(string a, string b){
	//Write your code here
	int i, j=0, res=-1;
	for(i=0; i<b.length(); i++) {
		if(j < a.length()) {
			if(a[j] == b[i]) {
				j++;
				if(res == -1) {
						res = i;
				}
			}
			else {
				j = 0;
				res = -1;
			}
		}
	}

	if(j != a.length()) {
		res = -1;
	}

	return res;
}
