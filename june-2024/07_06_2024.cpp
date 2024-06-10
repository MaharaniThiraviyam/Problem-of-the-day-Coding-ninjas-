//Kth Smallest and Largest Element of Array
#include <vector>
#include <algorithm>

vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
	sort(arr.begin(), arr.end());
	int k_small = arr[k-1];

	int k_large = arr[n-k];
	return {k_small, k_large};
}
