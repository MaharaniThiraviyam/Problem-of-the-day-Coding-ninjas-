//Find Minimum in Rotated Sorted Array 

int findMin(vector<int>& arr)
{
	// Write your code here.
	int min = arr[0];
	if(arr.size() == 1) {
		return min;
	}

	else if(arr.size() == 2) {
		if(min < arr[1]) {
			return min;
		}
	}

	for(int i=1; i<arr.size(); i++) {
		if(arr[i]<min) {
			min = arr[i];
			return min;
		}
	}
}
