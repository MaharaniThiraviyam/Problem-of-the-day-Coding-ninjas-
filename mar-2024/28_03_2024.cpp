//Money in Bank
#include <bits/stdc++.h> 
int totalMoney(int n)
{
	int sum = 0, counter=0, prev_counter=1;
	for(int i=1; i<=n ; i++) {
		if(i%7 == 1 && i!= 1) {
			counter = prev_counter + 1;
			prev_counter = counter;
		}
		else {
			counter += 1;
		}
		sum += counter;
	}
	return sum;
}
