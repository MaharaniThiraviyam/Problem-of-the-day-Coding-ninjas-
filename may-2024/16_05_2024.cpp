//getMoreAndLess
	vector<int> getMoreAndLess(int arr[], int n, int x) {
	    // code here
	    int min_count = 0, max_count = 0;
	    for(int i=0; i<n; i++) {
	        if(arr[i] <= x) {
	            min_count++;
	        }
	        
	        if(arr[i] >= x) {
	            max_count++;
	        }
	    }
	    
	    vector<int> result;
	    result.push_back(min_count);
	    result.push_back(max_count);
	    return result;
	}
