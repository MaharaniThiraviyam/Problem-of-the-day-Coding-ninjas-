//count number occurance
int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	int number_occurance = 0;
	for(int i=0; arr[i]<=x; i++) {
		if(arr[i] == x) {
			number_occurance += 1;
		}
	}
	return number_occurance;
}
