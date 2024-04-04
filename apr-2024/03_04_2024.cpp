//print2largest
	int print2largest(int arr[], int n) {
	    // code here
	    int max=-1, secondLargest = -1;
	    
	    for(int i=0; i<n; i++) {
	        if(arr[i] > max) {
	            secondLargest = max;
	            max = arr[i];
	        }
	        else {
	            if(arr[i]<max && arr[i] > secondLargest) {
	                secondLargest = arr[i];
	            }
	        }
	    }
	    
	    return secondLargest;
	}
