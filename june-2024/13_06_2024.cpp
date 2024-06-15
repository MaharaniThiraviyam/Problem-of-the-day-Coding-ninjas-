//Search Insert Position
int searchInsert(vector<int>& arr, int m)
{
	// Write your code here.
	int n = arr.size();
	
	for(int i=0; i<n; i++) {
		if(arr[i] >= m) {
			return i;
		}
	}
	return n;
}
