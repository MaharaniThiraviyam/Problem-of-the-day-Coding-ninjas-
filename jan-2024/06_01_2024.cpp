//NINJAS GARDEN 
#include <bits/stdc++.h> 
int ninjaGarden(vector<int> &flowers, int n, int k) 
{
	//write your code here
	vector<int> days(n);
	
	for (int day = 1; day <= n; day++) {
		int pos = flowers[day-1];
		days[pos-1] = day;

		if((pos>1) && (days[pos-2]!=0) && ((day - days[pos-2]) == k+1)) {
			return day;
		}
		
		if(pos<n && (days[pos]!=0) && (days[pos]-day == k+1)) {
			return day;
		}
	}
	return -1;

}
