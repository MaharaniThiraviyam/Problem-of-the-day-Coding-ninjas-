//sortBinaryArray
vector<int> sortBinaryArray(vector<int> arr, int n)  {
 	// Write your code here
	int num_zero_count=0;

	for(int i=0; i<n; i++) {
		if(arr[i] == 0) {
			num_zero_count += 1;
		}
	}

	for(int i=0; i<n; i++) {
		if(num_zero_count-- > 0) {
			arr[i] = 0;
		}
		else {
			arr[i] = 1;
		}
	}
	return arr;
}
