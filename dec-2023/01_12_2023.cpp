//Remove Duplicates from Sorted Array
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int counter = 0;
	for(int i=0; i<n; i++) {
		if(arr[i+1] != arr[i]) {
			counter++;
		}
	}
	return counter;
}
