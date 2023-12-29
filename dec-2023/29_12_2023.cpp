//minimumDistance

#include <bits/stdc++.h> 
int minimumDistance(int arr[], int n, int x, int y)
{
	// Write your code here
	int counter = -1, enable_counter = 0, i, x_exist=0, y_exist=0;
	for(i=0; i<n; i++) {
		if(arr[i] == x) {
			x_exist = 1;
		}

		if(arr[i] == y) {
			y_exist = 1;
		}

		if(arr[i] == x || arr[i] == y) {
			if(counter == -1) {
				counter = 0;
				enable_counter = 1;
			}
			else {
				break;
			}
		}

		if(enable_counter == 1) {
			counter++;
		}
	}

	if(x_exist == 0 || y_exist == 0) {
		counter = -1;
	}

	return counter;
}
