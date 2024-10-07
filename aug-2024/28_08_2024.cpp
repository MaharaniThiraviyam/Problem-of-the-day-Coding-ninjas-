int find_median(vector<int> arr)
		{
		    // Code here.
		    int n = arr.size();
    
            sort(arr.begin(), arr.end());
            
            if (n % 2 != 0) {
                return arr[n / 2];
            } 
            else {
                int mid1 = arr[(n / 2) - 1];
                int mid2 = arr[n / 2];
                return (mid1 + mid2) / 2;
            }
		}
